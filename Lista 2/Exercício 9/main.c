#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;

    printf("Digite a idade: ");
    scanf("%d", &id);



    if ( id < 18 )
    {
        printf("\nMenor de idade\n");
    }

    if ( id >= 65 )
    {
        printf("\nPessoa idosa\n");
    }

    if (( id >= 18 ) && ( id < 65 ))
    {
        printf("\nMaior de idade\n");
    }

    return 0;
}
