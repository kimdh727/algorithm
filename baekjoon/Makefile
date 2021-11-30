SHELL	:= /bin/bash

# Problem Num
NUM					= 1000
PROBLEM_DIR	= problems/$(shell expr $(NUM) / 100)/$(NUM)
SCRIPTS_DIR	= scripts

# C++
CXX					= g++
CXXFLAGS		= -Wall -Wextra -Werror

SRCS_DIR		= $(PROBLEM_DIR)
SRCS				= $(wildcard $(SRCS_DIR)/*.cpp)

OBJS_DIR		= $(PROBLEM_DIR)/objs
OBJS				= $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

TARGET_DIR	=	$(PROBLEM_DIR)
TARGET			= $(TARGET_DIR)/run.out

# Python
VENV				= venv
PYTHON3			= $(VENV)/bin/python3

# Tests
TESTS_DIR		= $(PROBLEM_DIR)/tests
TESTS_IN		= $(wildcard $(TESTS_DIR)/input*)
TESTS_OUT		= $(patsubst $(TESTS_DIR)/input%,$(TESTS_DIR)/output%,$(TESTS_IN))

all: $(TARGET)

test: all
	@echo Problem NUM: $(NUM)
	@for i in $(TESTS_IN); \
	do \
		output=$$(echo $$i | sed 's/input/output/'); \
		diff $$output <($(TARGET) < $$i) -w -q; \
	done

$(TARGET): $(OBJS)
	@ $(CXX) $(CXXFLAGS) -o $@ $<

$(OBJS): $(SRCS) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

gen: $(VENV)
	$(PYTHON3) $(SCRIPTS_DIR)/problem_parser.py -n $(NUM) -d $(SRCS_DIR)

clean:
	rm -rf $(OBJS_DIR)
	rm -f $(TARGET)

.PHONY: all test clean gen
