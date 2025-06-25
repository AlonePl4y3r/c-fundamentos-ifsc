#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char x;

    printf("Digite o conceito do aluno: ");
    scanf("%c", &x);

    switch (x)
    {
    case 'A':
        printf("Excelente!\n");
        break;
    case 'B':
        printf("Otimo!\n");
        break;
    case 'C':
        printf("Bom\n");
        break;
    case 'D':
        printf("Regular\n");
        break;
    case 'E':
        printf("Ruim\n");
        break;
    case 'F':
        printf("Nos vemos de novo ano que vem\n");
        break;
    default:
        printf("Erro: Conceito inexistente\n");
    }

    return 0;
}