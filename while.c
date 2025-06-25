#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const float pi = 3.1415;

float area_retangulo(float a, float b)
{
    return a * b;
}
float area_triangulo(float a, float b)
{
    return (a * b) / 2;
}
float hipotenusa(float a, float b)
{
    return sqrt(a * a + b * b);
}
float area_circulo(float r)
{
    return pi * (r * r);
}
float perimetro_circulo(float r)
{
    return 2 * pi * r;
}
float media_numeros(void)
{
    int c = 0, x;   // c = contador, x = quantidade n a ser calculada.
    float n, m = 0; // n = acumulador, m = numero de entrada.

    printf("Quantos números terão sua média calculada? ");
    scanf("%d", &x);
    printf("Digite os numeros: ");
    while (c < x)
    {

        scanf("%f", &n);

        m += n;
        c++;
    }
    return m / x;
}

int main()
{
    int i = 0;     // Aloca 32bits de memória e escreve 0 no endereço.
    while (i != 9) // Estrutura genérica de repetição, Não esquecer de implementar o incremento de i.
    {
        printf("Opções:\n");
        printf("1: Área de um retângulo\n");
        printf("2: Área de um triângulo\n");
        printf("3: Hipotenusa\n");
        printf("4: Área de um círculo\n");
        printf("5: Perímetro de um círculo\n");
        printf("6: Média de números\n");
        printf("9 para sair\n");
        scanf("%d", &i);

        float lado_a, lado_b;
        float a, b;

        switch (i) // Declara variável dentro da função main inteira (não isola a variavel como um ifElse)
        {          // Atua como jump de linha, jogando pro caso 1,2.. e break da um jump de linha pra fora do switch diferente de um ifElse.
        case 1:    // retangulo

            printf("Entre com os lados do retângulo: ");
            scanf("%f %f", &lado_a, &lado_b);
            printf("Área do retângulo: %f", area_retangulo(lado_a, lado_b));
            break;
        case 2: // triangulo
            printf("Digite o lado A e o lado B do triângulo: ");
            scanf("%f %f", &a, &b);
            printf("Área do triângulo: %f", area_triangulo(a, b));
            break;
        case 3: // hipotenusa
            printf("Digite o lado A e o lado B para calcular a hipotenusa: ");
            scanf("%f %f", &a, &b);
            printf("Hipotenusa do triângulo: %f", hipotenusa(a, b));
            break;
        case 4: // area do circulo
            printf("Digite o valor do Raio do círculo: ");
            scanf("%f", &a);
            printf("A área do círculo é: %f", area_circulo(a));
            break;
        case 5: // perimetro do circulo
            printf("Digite o Raio do círculo: ");
            scanf("%f", &a);
            printf("O perimetro do círculo é: %f", perimetro_circulo(a));
            break;
        case 6: // media de X numeros
        {
            float resultado = media_numeros();
            printf("A média calculada é: %.2f\n", resultado);
            break;
        }
        default:
            break;
        }
    }
    system("clear");
    return 0;
}