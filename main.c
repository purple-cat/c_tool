#include "int_tab.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int tab[10];
  int_rng_values(tab,10,50,0);
  int_print_me(tab,10);
/*
  printf("Utilisation du tri par selection\n");
  tri_selection(tab,5);
  int_print_me(tab,5);
*/

  printf("Utilisation du tri insertion V2\n");
  tri_insertionv2(tab,10);
  int_print_me(tab,10);





  return 0;
}
