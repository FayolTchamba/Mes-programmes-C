#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool VerifNombre(int tableau[], int nombre)
{
     int i, taille;
     for(i = 0; i < taille; i++)
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
     int i, nombre, taille = 5, tableau[5];

    printf("Entrez les 05 elements du tableau :\n");
    for(i = 0; i < taille; i++)
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
