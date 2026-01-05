# makefile

# the std setting sets clang to use C++20 with GNU extensions
# see https://clang.llvm.org/cxx_status.html
CFLAGS= -std=gnu++2a -g -Wall

# link time optimization flags see note about this at
# https://clang.llvm.org/docs/CommandGuide/clang.html
#LTOFLAGS= -Wl -object_path_lto 

.SUFFIXES:

# Why secondary and precious?  See
# https://www.gnu.org/savannah-checkouts/gnu/make/manual/html_node/Chained-Rules.html#Chained-Rules

.SECONDARY: %.o

.PRECIOUS: %.o


%: %.o 
	g++ $(CFLAGS) -o $@ $<

%.o: %.cpp
	g++ $(CFLAGS) -c $< 


# A rule with no dependencies is always up to date.  It will not be run unless
# you specify the target.  However, if you happen to create a file called "clean"
# this rule will not work as intended!  To prevent this problem, tell make
# that clean is a "phony" target.

.PHONY: clean

clean:
	echo "cleaning"
	/bin/rm -f *.o core


