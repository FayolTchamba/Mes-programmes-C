#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   printf("Entrez la taille du tableau :\n");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez le premier élément : ");
    scanf("%d", &tableau[0]);

    int somme = 0; 
    int contient_n = (tableau[0] == n) ? 1 : 0;

    for (int i = 1; i < n - 1; i++) 
    {
        int temp;
        int valide = 0;

        while (!valide) 
        {
            printf("Entrez l'élément %d : ", i + 1);
            scanf("%d", &temp);

            if (temp <= tableau[0]) 
            {
                printf("Erreur : L'élément doit être supérieur au premier (%d).\n", tableau[0]);
                continue;
            }
            
            if (temp == tableau[i - 1]) 
            {
                printf("Erreur : Deux éléments consécutifs ne peuvent pas être égaux.\n");
                continue;
            }

            if (i % 2 == 1 && temp % 2 != 0) 
            { 
                printf("Erreur : Les éléments de rang pair doivent être des multiples de 2.\n");
                continue;
            }

            
            tableau[i] = temp;
            somme = somme + temp; 
            if (temp == n) 
            {
                contient_n = 1;
            }
            valide = 1;
        }
    }

    
    if (!contient_n) 
    {
        printf("Erreur : Il doit y avoir au moins un élément égal à n dans le tableau.\n");
        return 1;
    }

    
    int dernier = 0;
    
        printf("Entrez le dernier élément  : ");
        scanf("%d", &tableau[n - 1]);

       
        if (tableau[n - 1] != somme)
        {
            printf("Erreur : Le dernier élément doit être égal à la somme des éléments du 2ème au %dème.\n", n - 1);
        } 
  
    printf("Tableau final :\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", tableau[i]);
    }
    printf("\n");

    return 0;
}

