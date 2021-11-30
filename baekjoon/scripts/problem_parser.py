import os
import requests
import re

from bs4 import BeautifulSoup
from optparse import OptionParser

def option_parse():
  parser = OptionParser()
  parser.add_option("-n", "--num", action="store", type="int", dest="num")
  parser.add_option("-d", "--dir", action="store", type="string", dest="destdir")
  parser.add_option("-f",  "--force", action="store_true", dest="force")
  parser.add_option("-R",  "--readme", action="store_true", dest="readme")

  (options, _) = parser.parse_args()
  if options.num is None:
    parser.error('num not given')
  if options.destdir is None:
    parser.error('dir not given')

  return options

def problem_parse(num: int):
  url = "https://www.acmicpc.net/problem/{}".format(num)

  html = requests.get(url).content
  soup = BeautifulSoup(html, "lxml")

  problem_title = soup.find(id="problem_title").text
  problem_body = soup.find(id="problem-body")

  return (problem_title, problem_body)

def gen_readme(num: int, problem_title: str, problem, destdir: str, options):
  os.makedirs(destdir, exist_ok=True)

  url = "https://www.acmicpc.net/problem/{}".format(num)
  problem_description = problem.find(id="problem_description").p
  problem_input = problem.find(id="input").p
  problem_output = problem.find(id="output").p
  problem_hint = problem.find(id="hint").p

  with open(destdir+"/README.md", "w") as f:
    f.write("# {} \[[{}]({})\]\n".format(problem_title, num, url))
    if problem_description is not None:
      f.write("\n## Description\n\n{}\n".format(problem_description.text))
    if problem_input is not None:
      f.write("\n## Input\n\n{}\n".format(problem_input.text))
    if problem_output is not None:
      f.write("\n## Output\n\n{}\n".format(problem_output.text))
    if problem_hint is not None:
      f.write("\n## Hint\n\n{}\n".format(problem_hint.text))

def gen_test_case(problem, destdir: str, options):
  os.makedirs(destdir, exist_ok=True)

  problem_sampleinputs = problem.find_all(id=re.compile("^sampleinput*"))
  problem_sampleoutputs = problem.find_all(id=re.compile("^sampleoutput*"))

  for input in problem_sampleinputs:
    case = re.search(r"([0-9]+)$", input.pre["id"]).group()
    file = destdir+"/input"+case
    with open(file, "w") as f:
      f.write(input.pre.text)

  for output in problem_sampleoutputs:
    case = re.search(r"([0-9]+)$", output.pre["id"]).group()
    file = destdir+"/output"+case
    with open(file, "w") as f:
      f.write(output.pre.text)

def main():
  options = option_parse()

  num = options.num
  destdir = options.destdir
  testsdir = destdir+"/tests"

  (problem_title, problem) = problem_parse(num)

  if options.readme is True:
    gen_readme(num, problem_title, problem, destdir, options)

  gen_test_case(problem, testsdir, options)

if __name__ == "__main__":
  main()
