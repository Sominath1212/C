#include<stdio.h>
int main( ) {
    long i , f = 1 , n;
    char choice;
    do
    {
        printf( "enter number=" );
        scanf( "%ld" , &n );
        for ( i = 1; i < n; i++ )
        {

            f = f * i;

        }
        printf( "%ld is a factorial " , f );
        printf( "\ndo want calculate factorial another number \nenter yes for(Y/y)no for (n/N)=" );
        scanf( "%c" , &choice );

    }
    while ( choice == 'Y' || choice == 'y' );

    return 0;
}