#include <stdio.h> //treino de tabuada com 2 vetores //adaptar para 1 vetor 2d!

void ini_array(int array[], int tamanho);

int main()
{
    int x[10];
    ini_array(x, 10);

    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            printf("%d x %d = %d\n", x[i], x[k], x[i] * x[k]);
        }
        printf("\n");

        return 0;
    }
}
    void ini_array(int array[], int tamanho) // preencher o array para tabuada.
    {
        for (int i = 0; i < 10; i++)
        {
            array[i] = i + 1;
        }
    }
