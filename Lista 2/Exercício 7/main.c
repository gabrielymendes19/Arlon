#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if ( 0 == N % 3 )
    {
        printf("\nE divisivel por 3");
    }

    if ( 0 == N % 7 )
    {
        printf("\nE divisivel por 7");
    }

    return 0;
}
