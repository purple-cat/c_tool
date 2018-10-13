programme: int_tab.o main.o struct_pile.o
	gcc -o programme main.o int_tab.o struct_pile.o -lm

int_tab.o: int_tab.c int_tab.h 
	gcc -Wall -Werror -g -c int_tab.c 

main.o: int_tab.c int_tab.h
	gcc -Wall -Werror -g -c main.c

struct_pile.o: struct_pile.h struct_pile.c
	gcc -Wall -Werror -g -c struct_pile.c
