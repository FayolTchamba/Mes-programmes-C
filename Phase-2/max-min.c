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

     return max;
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
     maxmin(T);
     printf("Le maximum du tableau est : \t", max);

     printf("Le minimum du tableau est : \t", min);

     return 0;
}
