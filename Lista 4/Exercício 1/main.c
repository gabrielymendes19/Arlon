#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20][30];
    int idade[20], i = 0;

    for(i = 0; i < 19; i++)
    {
        printf("Digite o nome: ");
        scanf("%s", &nome[i][30]);
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);
    }

    for(i = 0; i < 19; i++)
    {
        if(idade[i] >= 18)
        {
            printf("nome: %s  idade: %d\n", nome[i+1], idade[i]);
        }

    }

    system("PAUSE");
    return 0;
}
