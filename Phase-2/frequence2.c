#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void compter_occurrences(int tableau[], int taille)
{
     bool deja_compte[taille]; // Tableau pour vérifier si l'élément a déjà été compté


     for (int i = 0; i < taille; i++)
     {
          deja_compte[i] = false;
     }


     for (int i = 0; i < taille; i++)
     {
         // Si l'élément a déjà été compté, on continue
          if (deja_compte[i])
          {
               continue;
          }

         int compteur = 1;
         for (int j = i + 1; j < taille; j++)
         {
              if (tableau[i] == tableau[j])
              {
                   compteur++;
                   deja_compte[j] = true; // On considère cet élément comme compté
              }
         }


         printf("L'élément %d apparaît %d fois.\n", tableau[i], compteur);
    }
}

int main()
{

     int tableau[20] = {0}, i, taille = 20;
     printf("Entrez les 9 elements du tableau :\n");
     for(i = 0; i < 20; i++)
     {
          scanf("%d",&tableau[i]);
     }

     printf("Tableau initial :\n");
     for(i = 0; i < 20; i++)
     {
          printf("%d\n",tableau[i]);
     }
     compter_occurrences(tableau, taille);

     return 0;
}
