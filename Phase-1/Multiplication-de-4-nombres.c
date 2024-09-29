#include <stdio.h>
#include <stdlib.h>

int calcul1(int n1,int i)
{   
     int n2 = 0, n3 = 0, n4 = 0, res1 = 0, res2 = 0, res3 = 0, res4 = 0;

     printf("\nPour %d\n",n1);
     for(i = 1; i <= n1; i++)
     {
          res1 = n1*i;
          printf("\n%d x %d = %d\n",n1,i, res1);
     }
}

int calcul2(int n2,int i)
{
     int res2 = 0;
     printf("\nPour %d\n",n2);
     for(i = 1; i <= n2; i++)
     {
          res2 = n2*i;
          printf("\n%d x %d = %d\n",n2,i, res2);
     }
}

int calcul3(int n3,int i)
{
     int res3 = 0;
     printf("\nPour %d\n",n3);

     for(i=1; i<=n3; i++)
     {
          res3 = n3*i;
          printf("\n%d x %d = %d\n",n3,i, res3);
     }
}

int calcul4(int n4,int i)
{
     int res4;
     printf("\nPour %d\n",n4);
     for(i = 1; i <= n4; i++)
     {
          res4 = n4*i;
          printf("\n%d x %d = %d\n", n4 , i, res4);
     }
}

int main ()
{
     int i, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
     printf("Entrez quatre (4) nombres entiers :\n");
     scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
     calcul1(n1,i);
     calcul2(n2,i);
     calcul3(n3,i);
     calcul4(n4,i);

    return 0;
}
