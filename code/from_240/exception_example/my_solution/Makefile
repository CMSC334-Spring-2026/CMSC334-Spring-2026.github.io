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

testString: testString.o String.o
	g++ $(CFLAGS) -o testString testString.o String.o

testString_distro: testString_distro.o String.o
	g++ $(CFLAGS) -o testString_distro testString_distro.o String.o

String.o : String.h
	g++ $(CFLAGS) -c String.cpp

testString.o: String.h String.o
	g++ $(CFLAGS) -c testString.cpp

testString_distro.o: String.h String.o
	g++ $(CFLAGS) -c testString_distro.cpp

.o:
	g++ -o $@

clean:
	/bin/rm -f *.o core


