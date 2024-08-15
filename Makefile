# ***
# *** DO NOT modify this file 
# ***

GCC = gcc -std=c11 -g -Wall -Wshadow --pedantic -Wvla -Werror
SRCS = main.c eliminate.c
OBJS = $(SRCS:%.c=%.o)

all: hw01

hw01: $(OBJS) 
	$(GCC) $(OBJS) -o hw01

%.o: %.c
	$(GCC) -c $< -o $@

test%: hw01
	cat tests/test$(*) | ./hw01 > output$(*)
	diff output$(*) expected/expected$(*)

testall: test1 test2 test3 test4 test5

memory: hw01
	cat tests/test5 | valgrind --leak-check=full ./hw01

clean:
	rm -f hw01 $(OBJS) output* *.bak *~

.PHONY: all testall memory clean
