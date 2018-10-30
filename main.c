#include "int_tab.h"
#include "struct_pile.h"
#include "struct_file.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	printf("début des tests\n");
    file ma_file = file_vide();
    
    enfiler(&ma_file,1);
    enfiler(&ma_file,2);
    enfiler(&ma_file,3);
    enfiler(&ma_file,4);
    enfiler(&ma_file,5);
    enfiler(&ma_file,6);
    
    printf("nombre d'élément dans la file :%d\n",nb_element_file(&ma_file));
    print_me(&ma_file);
    
    
}
