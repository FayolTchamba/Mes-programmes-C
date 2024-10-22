#include <stdio.h>
#include <stdbool.h>


void fusionnerTableaux(int tab1[], int taille1, int tab2[], int taille2, int resultat[]) 
{
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) 
    {
    
        if (tab1[i] <= tab2[j]) 
        {
            resultat[k] = tab1[i]; // Je met l'élément de tab1 dans resultat
            i++;  // j'vance dans tab1
        } 
        else 
        {
            resultat[k] = tab2[j];
            j++;  
        }
        k++; // Avancer dans resultat
    }

    // J'ajoute les éléments restants de tab1, s'il y en a
    while (i < taille1) 
    {
        resultat[k] = tab1[i];
        i++;
        k++;
    }

    // idem pour i2
    while (j < taille2) 
    {
        resultat[k] = tab2[j];
        j++;
        k++;
    }
}

// Fonction pour vérifier si un tableau est trié
bool estTrie(int tableau[], int taille) 
{
    for (int i = 0; i < taille - 1; i++) 
    {
        if (tableau[i] > tableau[i + 1]) 
        {
            return false;
        }
        
    }
    return true;
}


void trierTableau(int tableau[], int taille) 
{
    int temp;
    for (int i = 0; i < taille - 1; i++) 
    {
        for (int j = 0; j < taille - 1 - i; j++) 
        {
            if (tableau[j] > tableau[j + 1]) 
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
            
        }
    }     
        
}

   
int main() 
{
    int tab1[5], tab2[5], fusion[10];

    printf("Entrez 5 éléments pour le premier tableau (trié) :\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &tab1[i]);
    }

    printf("Entrez 5 éléments pour le second tableau (trié) :\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &tab2[i]);
    }

    // Vérification si les tableaux sont triés
    if (!estTrie(tab1, 5)) 
    {
        printf("Le premier tableau n'est pas trié, tri en cours...\n");
        trierTableau(tab1, 5);
    }

    if (!estTrie(tab2, 5)) 
    {
        printf("Le second tableau n'est pas trié, tri en cours...\n");
        trierTableau(tab2, 5);
    }
    
    fusionnerTableaux(tab1, 5, tab2, 5, fusion);

    printf("Premier tableau trié : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    printf("Second tableau trié : ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", tab2[i]);
    }
    printf("\n");

    printf("Tableau fusionné : ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", fusion[i]);
    }
    printf("\n");

    return 0;
}

