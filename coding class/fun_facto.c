#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
long factorial( long n )
{
    long f = 1;
    for ( long i = 1; i <= n; i++ )
    {
        f = f * i;
    }
    return f;

}
int main( ) {

    long a , c;
    // do {
    printf( "enter any number=" );
    scanf( "%ld" , &a );
    c = factorial( a );
    printf( "factorial=%ld" , c );
    char choice;
    // fflush( stdin );
    // printf( "\n\ndo you want again calculate factorial(y/n)=" );
    // scanf( "%c" , &choice );
    // if ( choice == 'y' || choice == 'Y' )
    // {
    //     choice++;
    // }
    // else
    // {
    //     exit( 0 );
    // }



// }
// while ( 1 );
    return 0;
}