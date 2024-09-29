#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a = 0, b = 0, c = 0, d = 0,e = 0, f = 0,g = 0, moyenne = 0;
     printf("Entrez 07 nombres de votre choix :\n");
     scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
     moyenne = (a + b + c + d + e + f + g)/ 7;
     printf("La moyenne de vos nombres est : %.2f",moyenne);
     return 0;
}
