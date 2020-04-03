#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id[15], i = 0;;

    for(i = 0; i < 15; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &id[i]);
    }

    for(i = 0; i < 15; i++)
    {
        if (id[i] >= 18)
        {
            printf("\nQuem tem %d anos: maior de idade.",id[i]);
        }
        if ( id[i] = 1 )
        {
            printf("\nQuem tem %d ano: menor de idade.", id[i]);
        }
        else
        {
            printf("\nQuem tem %d anos: menor de idade.", id[i]);
        }
    }

    return 0;
}
