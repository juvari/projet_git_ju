#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int main()
{
  int a_trouver = generer_hasard();
  int proposition;
  int test = 0;
printf("salut les gens ici ici/X\n");
  while (test != 1)
  {
   proposition = entrer_nombre();
   test=afficher_comparaison(proposition, a_trouver);
  }
printf("modif dans labas et add pour exo11\n");
  printf("trouvé !\n");
return 0;
}
