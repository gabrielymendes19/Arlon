#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb;

    printf("Digite um numero: ");
    scanf("%d", &numb);

    if ( numb > 20 )
    {
        printf("\nNumero: %d", numb);
    }

    return 0;
}
