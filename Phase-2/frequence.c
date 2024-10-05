#include <stdio.h>
#include <stdlib.h>

int main()
{
     int tableau[20] = {0}, i, valeur, k = 0;
     printf("Entrez les 20 elements du tableau :\n");
     for(i = 0; i < 20; i++)
     {
          scanf("%d",&tableau[i]);
     }
     printf ("Entrez l'element que vous recherchez : \n");
     scanf("%d", &valeur);
     for(i = 0; i < 20; i++)
     {
          if(tableau[i] == valeur)
            k++;
     }
     printf("Tableau initial : \n");
     for(i = 0; i < 20; i++)
     {
          printf("%d\n",tableau[i]);
     }

     printf("Le nombre choisi est : %d\n",valeur);
     printf("La frequence de %d est : %d \n",valeur,k);
     return 0;
}
