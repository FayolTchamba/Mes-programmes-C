#include <stdio.h>
#include <stdlib.h>
int InverseTableau(int Te[])
{
     int i, taille;
     int* Ts[i];
     for(i = 0; i < taille; i++)
     {
        Ts[i] = Te[taille - i];
     }

     return *Ts[i];

}
int main()
{
     int i, taille = 10, Te[10] = {0}, Ts[10] = {0};
     printf("Entrez les 10 elements du tableau : \n");
     for(i = 0; i < taille; i++)
     {
        scanf("%d", &Te[i]);
     }
     printf("Tableau initial : \n");

     for(i = 0; i < taille; i++)
     {
          printf("%d\n", Te[i]);
     }
     printf("Tableau inverse : \n");

     for(i = 0; i < taille; i++)
     {
       InverseTableau(Te);
       printf("%d\n", Ts[i]);
     }
    return 0;
}
