#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n, i, s = 0, temp;
    printf("Entrez la taille du tableau que vous souhaitez creer :\n");
    scanf("%d", &n);

    // Allocation dynamique du tableau
    int *T = malloc(n * sizeof(int));
    if (T == NULL)
    {
        printf("Erreur d'allocation de memoire.\n");
        return 1;
    }
    printf("Entrez les elements du tableau : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        
        if (i % 2 != 0)
        {
            
            while(temp % 2 != 0)
            {
                printf("Erreur : Veuillez entrer un multiple de 2 pour cette %deme position :\n",i);
                scanf("%d", &temp);
            }
            T[i] = temp;
            while(temp <= T[0])
            {
                printf("Le premier element doit etre plus petit que tous les autres.\n");
                printf("Veuillez ressaisir le nombre :\n");
                scanf("%d", &temp);
            }
            T[i] = temp;
            while (temp == T[i - 1])
            {
                printf("Deux elements consecutifs ne doivent pas avoir la meme valeur.\n");
                printf("Veuillez ressaisir le nombre :\n");
                scanf("%d", &temp);
            }
            T[i] = temp;
     
        }   
        else
        {
            while (temp <= T[0])
            {
                printf("Le premier element doit etre plus petit que tous les autres.\n");
                printf("Veuillez ressaisir le nombre :\n");
                scanf("%d", &temp);
            }
            T[i] = temp;
        
            while (temp == T[i - 1])
            {  
                printf("Deux elements consecutifs ne doivent pas avoir la meme valeur.\n");
                printf("Veuillez ressaisir le nombre :\n");
                scanf("%d", &temp);
            }
            T[i] = temp;
        }
        for (i = 1; i < n - 1; i++)
        {
            s = s + T[i];
        } 

        printf("Entrez le dernier element :\n");
        scanf("%d", &T[n - 1]);


        while (T[n - 1] != s)
        {
            printf("Erreur : Le dernier element doit etre egal a la somme du 2eme au %deme element.\n",n-1);
            printf("Veuillez ressaisir le dernier element :\n");
            scanf("%d", &T[n - 1]);
        }


        printf("\nTableau final :\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", T[i]);
        }

    }
        free(T);
        return 0;
}   
