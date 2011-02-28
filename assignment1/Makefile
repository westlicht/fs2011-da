CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -Wall
LDFLAGS=-g
LDLIBS=

SRCS=assignment.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: assignment 

assignment: $(OBJS)
	g++ $(LDFLAGS) -o assignment $(OBJS) $(LDLIBS) 

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) tool
