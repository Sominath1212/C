#include<stdio.h>
#include<conio.h>
int main( ) {
    int n;
    char ucho;
    do
    {
        printf( "enter any number=" );
        scanf( "%d" , &n );
        if ( n % 2 == 0 )
        {
            printf( "% is even number" , n );

        }
        if ( n % 2 != 0 )
        {
            printf( "%d is odd number" , n );
        }
        fflush( stdin );
        printf( "\n\ndo want cheark another number yes for (Y/y)no for (n/n)=" );
        scanf( "%c" , &ucho );

    }
    while ( ucho == 'y' || ucho == 'y' );

    return 0;
}