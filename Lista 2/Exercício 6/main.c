#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    printf("Digite um numero: ");
    scanf("%d", &A);

    printf("Digite outro numero: ");
    scanf("%d", &B);

    if ( A > B )
    {
        printf("\n%d e maior", A);
        printf("\n%d e menor", B);
    }

    else
    {
        printf("\n%d e maior", B);
        printf("\n%d e menor", A);
    }

    return 0;
}
