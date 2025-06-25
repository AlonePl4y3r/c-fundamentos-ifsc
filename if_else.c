#include <stdio.h> //cabeçalho com todas bibliotecas.
#include <math.h>
#include <stdlib.h>

const float pi = 3.1415;

float area_retangulo(float x, float y); // todas assinaturas de funções.
float area_triangulo(float x, float y);
float area_trianguloRe(float x, float y);
float area_circulo(float x);
float perimetro_circulo(float x);
float media_tres(float x, float y, float z);
float hipotenusa(float a, float b);

int main()
{

    int choice = 0;
    float resposta = 0; // sempre vai retornar um resultado flutuante.
    system("clear");

    printf("(1) Voce deseja calcular a area de um retangulo?\n"); // menu de opções.
    printf("(2) Voce deseja calcular a area de um triangulo?\n");
    printf("(3) Voce deseja calcular a area de um triangulo retangulo?\n");
    printf("(4) Voce deseja calcular a area do circulo?\n");
    printf("(5) Voce deseja calcular o perimetro do circulo?\n");
    printf("(6) Voce deseja calcular a media de tres numeros?\n");
    printf("(7) Voce deseja calcular a hipotenusa de um triângulo retângulo?\n");
    scanf("%d", &choice); // escolha baseada no valor da variável, atuando como um "switch case".

    if (choice == 1) //"area de um retangulo"
    {

        float base = 0, altura = 0;

        printf("Digite o valor da base: ");
        scanf("%f", &base);

        printf("Digite o valor da altura; ");
        scanf("%f", &altura);

        resposta = area_retangulo(base, altura); // chamando o resultado da função pra dentro da variável float resposta.
    }
    else if (choice == 2) //"area de um triangulo qualquer"
    {

        float base = 0, altura = 0;

        printf("Digite o valor da base do triangulo: ");
        scanf("%f", &base);

        printf("Digite o valor da area do triangulo; ");
        scanf("%f", &altura);

        resposta = area_triangulo(base, altura);
    }
    else if (choice == 3) //"area de um triangulo retangulo"
    {

        float b = 0, a = 0;

        printf("Digite o valor do lado a do triangulo retangulo: ");
        scanf("%f", &a);

        printf("Digite o valor do lado b do triangulo retangulo: ");
        scanf("%f", &b);

        resposta = area_trianguloRe(a, b);
    }
    else if (choice == 4) //"area de um circulo"
    {
        float r = 0;

        printf("Digite o valor do raio do circulo: ");
        scanf("%f", &r);

        resposta = area_circulo(r);
    }
    else if (choice == 5) //"perimetro de um circulo"
    {

        float r = 0;

        printf("Digite o raio do circulo: ");
        scanf("%f", &r);

        resposta = perimetro_circulo(r);
    }
    else if (choice == 6) //"média de três pontos flutuantes"
    {
        float a, b, c;

        printf("Digite o valor de 3 decimais:");
        scanf("%f %f %f", &a, &b, &c);

        resposta = media_tres(a, b, c);
    }
    else if (choice == 7) //"hipotenusa de um triângulo retângulo
    {
        float a, b;

        printf("Digite o valor do cateto a e do cateto b:");
        scanf("%f %f", &a, &b);

        resposta = hipotenusa(a, b);
    };

    if (choice > 0 && choice < 8)
    {
        printf("resposta: %.2f", resposta);
    }
    else
    {
        printf("Opcao Invalida!");
    }

    return 0; // fim da função main <<<---
}

float area_retangulo(float a, float b)
{

    float resposta = 0; // funções retornando as respostas para função main.

    resposta = b * a;

    return resposta;
}

float area_triangulo(float altura, float base)
{

    float resposta = 0;

    resposta = (base * altura) / 2;

    return resposta;
}

float area_trianguloRe(float a, float b)
{

    float resposta = 0;

    resposta = (b * a) / 2;

    return resposta;
}

float area_circulo(float r)
{

    return pi * (r * r);
}

float perimetro_circulo(float r)
{

    return 2 * pi * r;
}

float media_tres(float x, float y, float z)
{
    float resposta = 0;
    resposta = (x + y + z) / 3;
    return resposta;
}

float hipotenusa(float a, float b)
{
    float c = 0;
    c = sqrt(a * a + b * b);
    return c;
}