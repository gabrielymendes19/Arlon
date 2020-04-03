#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;


    printf("Digite um numero: ");
    scanf("%d", &n1);

        n2 = n1%3;
        printf("\n%d",n2);

    if(n2==0)

        printf("\nE multiplo de 3 ");

    else

        printf("\nNao e multiplo de 3 ");


    return 0;
}
