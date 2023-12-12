# Makefile for testing functions submitted with a main function
# It uses catch testing library
#

#Variables
FNAME = integers.cc
CFLAGS = -Wall -std=c++11
CC = g++

# Replace with your own file names in the following two lines.
a.out: integers.cc
	$(CC) $(CFLAGS) $(FNAME) -o a.out


########################### DO NOT MODIFY THIS RULE ############################
#                           make and run the tests                             #
run_tests:
	sh _TEST/configure.sh
	$(CC) $(CFLAGS) _TEST/TEST_cases.cc -o _TEST/run_tests && ./_TEST/run_tests -s
	
	# test functionality of the menu and show output
	$(CC) $(CFLAGS) integers.cc -o _TEST/a.out
	sh _TEST/run_tests.sh
#	rm -rf ./_TEST/NO_MAIN.cc ./_TEST/run_tests
################################################################################


clean:
	rm -rf a.out *.o _TEST/NO_MAIN.cc _TEST/run_tests _TEST/a.out
