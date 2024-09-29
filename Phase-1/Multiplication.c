#include <stdio.h>
#include <stdlib.h>

int main()
{
      int nombre =0, i, resultat=0 ;
    printf("Entrez un nombre :\t");
    scanf("%d", &nombre);
    for (i=1;i<=10;i++)
    {
        resultat = nombre *i;
     printf("\n%d x %d = %d\n",nombre,i,resultat);
    }
    return 0;
}
