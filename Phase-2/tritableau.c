#include <stdio.h>
#include <stdlib.h>

int tritab(int tableau[], int taille)
{
     int i, j, min, temp;
     for (i = 0; i < taille - 1; i++)
     {
          min = i;
        // Je trouve l'indice du plus petit element
        for (j = i + 1; j < taille; j++)
        {
             if (tableau[j] < tableau[min])
             {
                  min = j;
             }
        }
        // j'echange le plus petit élément trouvé avec l'élément actuel
        if (min != i)
        {
             temp = tableau[i];
             tableau[i] = tableau[min];
             tableau[min] = temp;
        }
     }
     return tableau;
}


int main()
{
     int tableau[12] = {0};
     int taille = 12;

     printf("Veuillez entrer les 12 elements du tableau :\n");
     for (int i = 0; i < taille; i++)
     {
          scanf("%d", &tableau[i]);
     }

    printf("\nTableau initial :\n");
    for (int i = 0; i < taille; i++)
    {
         printf("%d\n", tableau[i]);
    }

    tritab(tableau, 12);

    printf("\nLe tableau trie est :\n");
    for (int i = 0; i < taille; i++)
    {
         printf("%d\n", tableau[i]);
    }


    return 0;
}
