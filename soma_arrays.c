#include <stdio.h>

int main()
{

    float v1[4], v2[4], soma[4];

    printf("Dado duas listas, identifique os números a serem somados em suas respectivas casas.\nLista 1:\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %d° numero a ser somado: ", i + 1);
        scanf("%f", &v1[i]);
    }
    printf("Insira os dados da lista 2:\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %d° numero a ser somado: ", i + 1);
        scanf("%f", &v2[i]);
    }
    printf("A soma entre os ìndices resulta em: ");
    for (int i = 0; i < 4; i++)
    {
        soma[i] = v1[i] + v2[i];
        printf("%.2f ", soma[i]);
    }
    printf("\n");

    return 0;
}