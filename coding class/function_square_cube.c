#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int square( int n )
{
    return n * n;
}
int cube( int n )
{
    return n * n * n;
}
int main( ) {
    int n , c;
    int ch;
    do {
        printf( "1-cube\n" );
        printf( "2square\n" );
        printf( "enter operation number=" );
        scanf( "%d" , &ch );
        if ( ch == 1 )
        {
            printf( "Enter any number=" );
            scanf( "%d" , &n );
            c = cube( n );
            printf( "cube =%d" , c );
        }
        if ( ch == 2 )
        {
            printf( "enter any number=" );
            scanf( "%d" , &n );
            c = square( n );
            printf( "total square =%d" , c );
        }
        char ch;
        fflush( stdin );
        printf( "\ndo want performed again calculation=" );
        scanf( "%c" , &ch );
        if ( ch == 'y' || ch == 'Y' )
        {
            ch++;
        }
        else if ( ch == 'n' || ch == 'N' )
        {
            exit( 0 );
        }
    }

    while ( 1 );


    return 0;
}