#include <stdio.h>

int main()
{
    float notas[10];
    float maiorN = 0, menorN = 10, media = 0;

    printf("Escreva o valor de 38 notas de 0 a 10 referente a turma:\n");

    for (int i = 0; i < 38; i++)
    {
        printf("Digite o valor da %d° nota: ", i + 1);
        scanf("%f", &notas[i]);

        while (notas[i] < 0 || notas[i] > 10)
        {
            printf("Erro: Valor de notas inválido, tente novamente: ");
            scanf("%f", &notas[i]);
        }
    }
    for (int i = 0; i < 38; i++)
    {
        if (notas[i] >= maiorN)
        {
            maiorN = notas[i];
        }
        if (notas[i] <= menorN)
        {
            menorN = notas[i];
        }
        media += notas[i];
    }
    printf("\nDados as notas, seus respectivos resultados incluem:\n");
    printf("Maior nota da turma: %.2f.\n", maiorN);
    printf("Menor nota da turma: %.2f\n", menorN);
    printf("Média geral da turma: %.2f\n", media/38);


    return 0;
}