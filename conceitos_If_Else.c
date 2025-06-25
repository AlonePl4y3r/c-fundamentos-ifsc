#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char x;

    printf("Digite o conceito do aluno: ");
    scanf("%c", &x);

    if (x == 'A')
    {
        printf("Excelente!\n");
    }
    else if (x == 'B')
    {
        printf("Otimo!\n");
    }
    else if (x == 'C')
    {
        printf("Bom");
    }
    else if (x == 'D')
    {
        printf("Regular");
    }
    else if (x == 'E')
    {
        printf("Ruim\n");
    }
    else if (x == 'F')
    {
        printf("Nos vemos de novo ano que vem");
    }
    else
    {
        printf("ERRO: conceito inexistente.\n");
    };

    return 0;
}