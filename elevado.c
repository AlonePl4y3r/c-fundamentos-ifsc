#include <stdio.h>

int main()
{
    int a, b, r = 1;
    
    printf("\nDigite o valor a ser elevado: ");
    scanf("%d", &a);
    printf("Diggite o valor do expoente: ");
    scanf("%d", &b);


    for (int i = 0; i < b; i++)
    {
        r *= a;
    }

    printf("O resultado e: %d", r);
    

    return 0;
}