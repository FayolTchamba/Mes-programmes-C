#include <stdio.h>
#include <stdlib.h>

 void parite(int nombre)
 {

  int pair= 0;
        printf("Entrez un nombre compris entre 1 et 59 :\t");
        scanf("%d",&nombre);
    while (nombre < 1 || nombre>59)
      {
          printf("\nVeuillez entrer un nombre compris entre 1 et 59 !");
      }
    pair = nombre % 2;

    if(pair  == 0)
      {
        printf("\n%d est pair\n", nombre);
      }
    else
       {
        printf("\n%d n'est pas pair\n", nombre);
       }

   }
  int main()
{
    int nombre;

    parite(nombre);
    return 0;
}
