#include<stdio.h>
int avg( int x , int y )
{
    return ( x + y ) / 2.0;
}
int main( ) {
    int a , c , b;
    printf( "enter any two number=" );
    scanf( "%d%d" , &a , &b );
    c = avg( a , b );
    printf( "total avg =%d\n" , c );
    return 0;
}