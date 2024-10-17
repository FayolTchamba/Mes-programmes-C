#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b, temp, T[10] = {0};
    printf("Entrez les elements pour creer un tableau de 10 elements :\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &T[i]);
    }
    printf("Tableau initial :\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", T[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(T[i] % 2 == 0)
        {
            a = T[i];
        }
        if(T[i] % 2 != 0)
        {
            b = T[i];
        }
        temp = a;
        a = b;
        b = temp;
        T[i] = a;
        T[i] = b;
    }
    printf("Tableau final : \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", T[i]);
    }


    return 0;
}
