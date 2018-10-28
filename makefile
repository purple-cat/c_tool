programme: int_tab.o main.o struct_pile.o struct_file.o
	gcc -o programme main.o int_tab.o struct_pile.o struct_file.o -lm

int_tab.o: int_tab.c int_tab.h 
	gcc -Wall -Werror -g -c int_tab.c 

main.o: int_tab.c int_tab.h
	gcc -Wall -Werror -g -c main.c

struct_pile.o: struct_pile.h struct_pile.c
	gcc -Wall -Werror -g -c struct_pile.c

struct_file.o: struct_file.h struct_file.c 
	gcc -Wall -Werror -g -c struct_file.c

clean:
	rm main.o
