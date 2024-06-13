#include<stdio.h>
void facto( )
{
    long n , f = 1 , i;
    printf( "\nenter number=" );
    scanf( "%ld" , &n );
    for ( i = 1; i <= n; i++ )
    {
        f = f * i;
    }
    printf( "factorial =%ld\n" , f );


}
int main( ) {

    for ( int i = 1; i <= 3; i++ )
    {
        facto( );
    }

    return 0;

}