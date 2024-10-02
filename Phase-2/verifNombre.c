#include <stdio.h>
#include <stdlib.h>

int VerifNombre(int tableau[], int nombre)
{
     int i, val ;
     for(i=0; i < 15; i++)
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
     int i, nombre = 0, val, tableau[15] = {0};

    printf("Entrez les 15 elements du tableau :\n");
    for(i = 0; i < 15; i++)
    {
         scanf("%d", &tableau[i]);
    }
    printf("Entrez le nombre a rechercher : \n");
    scanf("%d", &nombre);
    VerifNombre(tableau, nombre);
    return 0;
}
