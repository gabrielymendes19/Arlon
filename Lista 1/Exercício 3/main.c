#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nam[20];
    float sf, tv, sfn;

    printf("Digite o nome do vendedor: ");
    scanf("%s", &nam);

    printf("\nDigite o salario fixo do vendedor: ");
    scanf("%f", &sf);

    printf("\nDigite o total de vendas: ");
    scanf("%f", &tv);

    sfn = sf + (tv * 0.15);

    printf("\nO nome do vendedor e: %s", nam);

    printf("\nO salario fixo no final do mes e: R$ %.2f ", sfn);

    return 0;
}
