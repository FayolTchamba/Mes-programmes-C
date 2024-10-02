#include <stdio.h>
#include <stdlib.h>
void InverseTableau(int Te[], int Ts[])
{
     int i;
     for(i = 0; i < 10; i++)
     {
          Te[10 - i] = Ts[i];
     }

}
int main()
{
     int i, Te[10] = {0}, Ts[10] = {0};
     printf("Entrez les 10 elements du tableau : \n");
     for(i = 0; i < 10; i++)
     {
        Te[i] = scanf("%d", &Te[i]);
     }
     InverseTableau(Te, Ts);
     printf("Tableau initial : \n");
     for(i = 0; i < 10; i++)
     {
          printf("%d\n", Te[i]);
     }
     printf("Tableau inverse : \n");
     for(i = 0; i < 10; i++)
     {
       printf("%d\n", Ts[i]);
     }
    return 0;
}
