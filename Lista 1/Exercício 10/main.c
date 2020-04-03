#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pc, perc, vv;

    printf("Digite o preco de custo do produto: ");
    scanf("%f", &pc);

    printf("\nDigite o percentual: ");
    scanf("%f", &perc);

    vv = ( pc * ( perc / 100 ) ) + pc;

    printf("\nValor de venda: R$%.2f", vv);


    return 0;
}
