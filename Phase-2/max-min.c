#include <stdio.h>
#include <stdlib.h>

int maxmin(int T[])
{
     int i, max = 0, min = 1, taille;
     for (i = 0; i < taille; i++)
     {
          if (T[i] > max)
          {
               max = T[i];
          }
          if (T[i] < min)
          {
               min = T[i];
          }

     }
          int* Ts[2] = {max, min};


          return *Ts;
}


int main()
{
     int i, taille = 10, max, min, T[10] = {0};
     printf("Entrez les 10 elements du tableau : \n");
     for (i = 0; i < taille; i++)
     {
          scanf("%d",&T[i]);
     }

     printf("Tableau initial : \n");
     for (i = 0; i < taille; i++)
     {
          printf("%d\n",T[i]);
     }

     printf("Le maximum et le minimum du tableau sont respectivement : %d et %d \t", maxmin(T));



     return 0;
}
