#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vcd, r, vemd;

    printf("Digite o valor do dinheiro: ");
    scanf("%f", &r);

    printf("Digite o valor da cotacao: ");
    scanf("%f", &vcd);

    vemd = r * vcd;

    printf("\nO valor em dolar: US$ %.2f", vemd);

    return 0;
}
