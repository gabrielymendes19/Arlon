#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite a variavel A: ");
    scanf("%d", &a);

    printf("\nDigite a variavel B: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("\nVariavel A: %.0d", a);
    printf("\nVariavel B: %.0d", b);

    return 0;
}
