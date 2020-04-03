#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vd, vr;

    printf("Digite o valor depositado: ");
    scanf("%f", &vd);

    vr = vd * 1.007 ;

    printf("\nValor de rendimento: R$%.2f", vr);

    return 0;
}
