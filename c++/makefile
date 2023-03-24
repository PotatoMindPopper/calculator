# makefile for c++\makefile

TARGET = calculator

# define windows or linux for remove command and executable name
ifeq ($(OS),Windows_NT)
	RM = del /Q
	EXE = $(TARGET).exe
else
	RM = rm -f
	EXE = $(TARGET)
endif

# define compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11 -g

# define source files
SRCS = calculator.cpp

# define object files
OBJS = $(SRCS:.cpp=.o)

# define executable file
MAIN = $(EXE)

# define header files
HDRS = $(SRCS:.cpp=.hpp)

# define dependencies
DEPS = $(SRCS:.cpp=.d)

# define phony targets
.PHONY: all clean

# define all target
all: $(MAIN)

# define executable target
$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# define object file target
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	$(CC) $(CFLAGS) -MM $< > $*.d

# define clean target
clean:
	$(RM) $(OBJS) $(DEPS) $(MAIN)

# include dependencies
-include $(DEPS)

# Path: c++\main.cpp