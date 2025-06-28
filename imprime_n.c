#include <stdio.h>

int main()
{
    int a = 0, b;

    printf("Digite até onde o loop vai: ");
    scanf("%d", &b);
    
    while (a <= b)
    {
        printf("%d ", a);

        a++;
    }

    return 0;
}