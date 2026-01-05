# makefile
# use to compile and test the assembler ASM for the STACK computer and
# its various components

DEBUG_FLAG= -DDEBUG -g -Wall 

# the std setting sets clang to use C++20 with GNU extensions
# see https://clang.llvm.org/cxx_status.html
CFLAGS=-std=gnu++2a -DDEBUG -g -Wall

.SUFFIXES: .cpp .o

.cpp.o:
	g++ $(CFLAGS) -c $< 

pointers: pointers.o 
	g++ -o $@ $<

references: references.o
	g++ -o $@ $<

struct: struct.o
	g++ -o $@ $<

example: example.o
	g++ -o $@ $<

.o:
	g++ -o $@ 

scratch: scratch.o
	g++ -o scratch scratch.o

clean:
	/bin/rm -f *.o core


