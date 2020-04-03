#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;

    printf("Digite a idade: ");
    scanf("%d", &id);

    if ( id < 16 )
    {
        printf("\nNao eleitor");
    }

    if ( ( id >= 18 ) && ( id < 65 ) )
    {
        printf("\nEleitor obrigatorio");
    }

    if ( ( id >= 16 ) && ( id < 18 ) || ( id >= 65 ) )
    {
        printf("\nEleitor facultativo");
    }

    return 0;
}
