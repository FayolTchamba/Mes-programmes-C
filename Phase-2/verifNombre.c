#include <stdio.h>
#include <stdlib.h>

int VerifNombre(int tableau[], int nombre)
{
     int i, val, taille ;
     for(i=0; i < taille; i++)
     {
          if(tableau[i] == nombre)
          {
               val = 1;
          }
          else
          {
               val = 0;
          }
     }

     return val;
}


int main()
{
     int i, nombre = 0, val, taille = 0, tableau[15] = {0};

    printf("Entrez la taille du tableau : \n");
    scanf("%d", &taille);
    printf("Entrez les %d elements du tableau :\n",taille);
    for(i = 0; i < taille; i++)
    {
         scanf("%d", &tableau[i]);
    }
    printf("Entrez le nombre a rechercher : \n");
    scanf("%d", &nombre);
    VerifNombre(tableau, nombre);
    return 0;
}
