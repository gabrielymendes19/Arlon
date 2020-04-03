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

    if ( num3 > 10 )
    {
        printf("\nResultado: %d", num3);
    }

    return 0;
}
