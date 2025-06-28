#include <stdio.h>

int main()
{
    char nome[5][20];
    int i = 0;

    while (i < 5)
    {
        printf("Digite o %d° nome (sem espaços): ", i + 1);
        scanf("%s", nome[i]);

        i++;
    }
    i = 0;
    while (i < 5)
    {
        printf("- %s\n", nome[i]);
        i++;
    }

    return 0;
}