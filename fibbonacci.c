#include <stdio.h>

int main()
{
    int n;

    printf("Digite a quantidade de números de Fibonacci a serem impressas: ");
    scanf("%d", &n);
    int fibbonacci[n];

    fibbonacci[0] = 1;
    fibbonacci[1] = 1;

    if (n >= 1){printf("%d ",fibbonacci[0]);};
    if (n >= 2){printf("%d ", fibbonacci[1]);};

    for (int i = 2; i < n; i++)
    {
        fibbonacci[i] = fibbonacci[i - 1] + fibbonacci[i - 2];
        printf("%d ", fibbonacci[i]);
    }

    return 0;
}
