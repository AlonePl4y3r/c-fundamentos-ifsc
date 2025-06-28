#include <stdio.h>

int main()
{
    int n;

    printf("\nDigite os numeros a serem comparados: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d e impar.\n", i);
        }
        
    }
    

    return 0;
}