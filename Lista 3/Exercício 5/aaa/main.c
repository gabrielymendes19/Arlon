#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;


printf("\nDe qual numero quer a tabuada?\n");
scanf("%d",&n);

    c1 = 1 * n ;
    c2 = 2 * n ;
    c3 = 3 * n ;
    c4 = 4 * n ;
    c5 = 5 * n ;
    c6 = 6 * n ;
    c7 = 7 * n ;
    c8 = 8 * n ;
    c9 = 9 * n ;
    c10 = 10 * n ;

    printf("\n1 x %d = %d\n2 x %d = %d\n3 x %d = %d\n4 x %d = %d\n5 x %d = %d\n6 x %d = %d\n7 x %d = %d\n8 x %d = %d\n9 x %d = %d\n10 x %d = %d", n, c1, n, c2, n, c3, n, c4, n, c5, n, c6, n, c7, n, c8, n, c9, n, c10);

    return 0;
}
