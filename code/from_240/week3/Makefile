# makefile
# use to compile and test the assembler ASM for the STACK computer and
# its various components

DEBUG_FLAG= -DDEBUG -g -Wall 

# the std setting sets clang to use C++20 with GNU extensions
# see https://clang.llvm.org/cxx_status.html
CFLAGS=-std=gnu++2a -DDEBUG -g -Wall

.SUFFIXES:


%.o:%.cpp
	g++ $(CFLAGS) -c $<

%:%.o
	g++ $(CFLAGS) -o $@ $<

#.PHONY: clean

clean:
	/bin/rm -f *.o core


