CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)

SRCS=assignment.cpp
OBJS=$(subst .cc,.o,$(SRCS))

all: assignment 

assignment: $(OBJS)
	g++ $(LDFLAGS) -o assignment $(OBJS) $(LDLIBS) 

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) tool
