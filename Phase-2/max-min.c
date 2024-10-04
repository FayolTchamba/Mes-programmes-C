#include <stdio.h>
#include <stdlib.h>
struct Resultat {
    int max;
    int min;
};


struct Resultat maxmin(int tableau[], int taille)
{
    struct Resultat resultat;
    resultat.max = tableau[0];
    resultat.min = tableau[0];


    for (int i = 1; i < taille; i++)
    {
        if (tableau[i] > resultat.max)
        {
             resultat.max = tableau[i];
        }
        if (tableau[i] < resultat.min)
        {
             resultat.min = tableau[i];
        }
    }

    return resultat;  // Retourner la structure contenant max et min
}

int main()
{
     int tableau[10];

     printf("Veuillez entrer 10 entiers :\n");
     for (int i = 0; i < 10; i++)
     {
          scanf("%d", &tableau[i]);
     }


    struct Resultat resultat = maxmin(tableau, 10);


    printf("Le tableau saisi est : \n");
    for (int i = 0; i < 10; i++)
    {
         printf("%d\n", tableau[i]);
    }

    printf("\nLe maximum est : %d", resultat.max);
    printf(" \nLe minimum est : %d\n", resultat.min);

    return 0;
}
