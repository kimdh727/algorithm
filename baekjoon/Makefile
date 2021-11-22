
# Question Num
NUM				= 1000

# FOR CPP
CXX				= g++
CXXFLAGS	= -Wall -Wextra -Werror
SRCS			= $(wildcard $(NUM)/*.cpp)
OBJSDIR		= $(NUM)/objs
OBJS			= $(patsubst $(NUM)/%.cpp,$(OBJSDIR)/%.o,$(SRCS))

TARGET		= $(NUM)/run.out

TESTS			= $(wildcard $(NUM)/tests/input*)

all: $(TARGET)

test: all
	$(TARGET) < $(TESTS)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(OBJS): $(SRCS) $(OBJSDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJSDIR):
		mkdir -p $(OBJSDIR)

clean:
	rm -rf $(OBJSDIR)
	rm $(TARGET)

.PHONY: all test clean
