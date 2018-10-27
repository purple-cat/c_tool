#include "int_tab.h"
#include "struct_pile.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	printf("début des tests\n");
	pile p=NULL;
	push(&p,1);
	push(&p,2);
	push(&p,3);

	printf("tete de pile %d",tete_pile(&p));
    printf("Essaie git hub");
}
