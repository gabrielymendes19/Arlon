#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if ( N > 0 )
    {
        printf("\nPositivo");
    }

    if ( N < 0 )
    {
        printf("\nNegativo");
    }

    if ( N == 0 )
    {
        printf("\nNulo");
    }

    return 0;
}
