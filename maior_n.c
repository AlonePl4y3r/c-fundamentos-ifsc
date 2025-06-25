#include <stdio.h>

int main()
{
    int numeros[10] = {1, 4, 12, 32, 75, 14, 15, 3, 46, 44};
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        if (temp < numeros[i])
        {
            temp = numeros[i];
        }
    }
    printf("%d\n", temp);

    return 0;
}