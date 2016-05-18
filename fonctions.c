#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"


int generer_hasard()
{
  srand(time(NULL));
  int a = rand()%100 +1;
return a;
}

int entrer_nombre()
{
  int a;
  printf("entrez un nombre\n");
  scanf("%d", &a);
return a;
}

int afficher_comparaison(int a_trouver, int proposition)
{
  if (proposition < a_trouver)
    printf("c'est plus\n");
  else if (proposition > a_trouver)
    printf("c'est moins\n");
  else
   return 1;
return 0;
}
