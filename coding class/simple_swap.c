/*swpping of two integers*/
#include<stdio.h>
int main( ) {
    int a , b;
    printf( "enter first number=\n" );
    scanf( "%d" , &a );
    printf( "enter second number=\n" );
    scanf( "%d" , &b );
    printf( "before swapping=\n" );
    printf( "%d\t%d" , a , b );
    int t = a;
    a = b;
    b = t;
    printf( "\nafter swapping=\n" );
    printf( "%d\t%d" , a , b );

    return 0;
}