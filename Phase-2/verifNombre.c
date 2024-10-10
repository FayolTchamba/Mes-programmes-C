#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAILLE 15

bool VerifNombre(int tableau[], int nombre)
{
     int i;
     for(i = 0; i < TAILLE; i++)
     {
          if(tableau[i] == nombre)
          {
               return true;
          }

     }
     return false;
}


int main()
{
     int i, nombre, tableau[TAILLE];

     printf("Entrez les 15 elements du tableau :\n");
     for(i = 0; i < TAILLE; i++)
     {
          scanf("%d", &tableau[i]);
     }
     printf("Entrez le nombre a rechercher : \n");
     scanf("%d", &nombre);
     if(VerifNombre(tableau, nombre))
     {
          printf("true\n");
     }
     else
     {
          printf("false\n");
     }

     return 0;
}
