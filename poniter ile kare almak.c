#include <stdio.h>
#include <stdlib.h>

/*Aybars ARSLAN*/

int kare ( int );

int main()
{
    int *a;

    printf ( "Karesini almak istediginiz sayiyi giriniz: " );
    scanf ( "%d", &a );
    kare ( a );
    return 0;
}

int kare ( int x )
{
    int y = x * x;
    printf( "%d", y );
    return y;
}
