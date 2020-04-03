#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vc, vp;

    printf("Digite o valor de compra: ");
    scanf("%f", &vc);

    vp = vc / 5;

    printf("\nValor das prestacoes: 5x de R$%.2f", vp);

    return 0;
}
