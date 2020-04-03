#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nam[3][30];
    int sex[4], i = 0, h=0, m=0;

    for(i = 0; i < 3; i++)
    {
        printf("Digite o nome: ");
        scanf("%s", &nam[i][30]);
        printf("Digite 1 para Homem e 2 para Mulher: ");
        scanf("%d", &sex[i]);
                }

    for(i = 0; i < 4; i++)
    {
        if (sex[i] == 1)
        {
            printf("\n%s: Homem.", nam[i+1]);
            h = h + 1;
        }
        if (sex[i] == 2)
        {
            printf("\n%s: Mulher.", nam[i+1]);
            m = m + 1;
        }

    }
    printf("\nQuantidade de mulheres: %d\n", m);
    printf("Quantidade de Homens: %d\n", h);

    return 0;
}
