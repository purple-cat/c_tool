programme: int_tab.o main.o
	gcc -o programme main.o int_tab.o -lm

int_tab.o: int_tab.c int_tab.h 
	gcc -Wall -Werror -g -c int_tab.c 

main.o: int_tab.c int_tab.h
	gcc -Wall -Werror -g -c main.c