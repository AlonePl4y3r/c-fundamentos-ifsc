#include <stdio.h>

int main()
{

    int a = 0, x;

    printf("\nDigite quantos nomes vao ser cadastrados: ");
    scanf("%d", &x);

    char pessoas[x][20];

    while (a < x)
    {
        printf("\nDigite o %d nome: ", a + 1);
        scanf("%s", pessoas[a]);

        a++;
    }
    a = 0;

    while (a < x)
    {
        printf("\n nome %d: %s", a + 1, pessoas[a]);

        a ++;
    }

    return 0;
}