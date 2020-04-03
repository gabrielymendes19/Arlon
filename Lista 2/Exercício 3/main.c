#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    num3 = num1 + num2;

    if ( num3 > 20 )
    {
        num3 = num3 + 8;
        printf("\nResultado: %d", num3);
    }

    if  ( num3 <= 20 )
    {
        num3 = num3 - 5;
        printf("\nResultado: %d", num3);
    }

    return 0;
}
