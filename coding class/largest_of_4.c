/*write program find largeast number in 4 number*/

#include<stdio.h>
int main( ) {
    int a , b , d , c;
    printf( "enter any 4 number=\n" );
    scanf( "%d%d%d%d" , &a , &b , &c , &d );
    if ( a > b && a > c && a > d )
    {
        printf( "%d is largest number" , a );
    }
    else if ( b > a && b > c && b > d )
    {
        printf( "%d is largest number" , b );
    }
    else if ( c > a && c > b && c > d )
    {
        printf( "%d is largest number" , c );
    }
    else
    {
        printf( "%d is largest number" , d );
    }


    return 0;
}