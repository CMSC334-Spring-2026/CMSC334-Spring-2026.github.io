# makefile
# use to compile and test the assembler ASM for the STACK computer and
# its various components

DEBUG_FLAG= -DDEBUG -g -Wall 

# the std setting sets clang to use C++20 with GNU extensions
# see https://clang.llvm.org/cxx_status.html
CFLAGS=-std=gnu++2a -DDEBUG -g -Wall

.SUFFIXES:

.SECONDARY: %.o

.PRECIOUS: %.o

StackTester: Stack.h StackTester.cpp
	g++ $(CFLAGS) -o StackTester StackTester.cpp

StackTesterAssertions: Stack.cpp Stack.h StackTesterAssertions.cpp
	g++ $(CFLAGS) -o StackTesterAssertions StackTesterAssertions.cpp Stack.cpp

StackTesterCatch: Stack.cpp Stack.h StackTesterCatch.cpp
	g++ $(CFLAGS) -o StackTesterCatch StackTesterCatch.cpp Stack.cpp


%.o: %.cpp
	g++ $(CFLAGS) -c $< 

%: %.o 
	g++ $(CFLAGS) -o $@ $<

# A rule with no dependencies is always up to date.  It will not be run unless
# you specify the target.  However, if you happen to create a file called "clean"
# this rule will not work as intended!  To prevent this problem, tell make
# that clean is a "phony" target.


.PHONY: clean

clean:
	/bin/rm -f *.o core


