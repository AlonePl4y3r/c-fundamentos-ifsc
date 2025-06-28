#include <stdio.h> // leia um número n, some todos os números inteiros de 1 a n e mostre o resultado obtido;

int main()
{

    int a = 0, b;

    printf("Entre com a quantidade de somas: ");
    scanf("%d", &b);

    for (int i = 0; i <= b ; i++)
    {
        a += i;
    }

    printf("\nResultado das somas: %d", a);
    
    return 0;
}