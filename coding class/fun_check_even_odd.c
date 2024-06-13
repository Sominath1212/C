#include<stdio.h>
void check( )
{
    long n;
    printf( "Enter number=" );
    scanf( "%ld" , &n );
    if ( n % 2 == 0 )
    {
        printf( "number is even\n" );
    }
    else
    {
        printf( "number is odd\n" );
    }


}
int main( ) {
    check( );
    check( );
    check( );
    return 0;
}