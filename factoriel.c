#include <stdio.h>
#include <stdlib.h>

  void factoriel(int nombre)
{
    int i=1, f=1;
    printf("Entrez un nombre positif :\t");
    scanf("%d",&nombre);

    while (nombre<0)
        {
        printf("Veuillez entrer un nombre positif !");
        }
    for(i=1;i<=nombre;i++)
     {
        f=i*f;
     }
  printf("\n Le factoriel de %d est %d (%d! = %d)\n",nombre,f,nombre,f);

}
     int main()
     {
        int nombre=0;

        factoriel (nombre);

       return 0;
     }

