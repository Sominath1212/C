#include<stdio.h>
int avg( int a , int b )
{
    int s = a + b;
    int avg = s / 2.0;
    return avg;
}
int main( ) {

    int a , b , c;
    printf( "Enter two value=\n" );
    scanf( "%d%d" , &a , &b );
    c = avg( a , b );
    printf( "total averag=%d" , c );
    return 0;
}