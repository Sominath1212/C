/*write A program to accept4 digit number from the user and rewrite number add 1 form each every digit*/
#include<stdio.h>
int main( ) {
    int num;
    printf( "enter any number=\n" );
    scanf( "%d" , &num );
    int a = num % 10;
    num = num / 10;
    int b = num % 10;
    num = num / 10;
    int c = num % 10;
    num = num / 10;
    int d = num % 10;
    num = num / 10;
    int sum = ( ++d ) * 1000 + ( ++c ) * 100 + ( ++b ) * 10 + ( ++a );
    printf( "resulten number is %d" , sum );
    return 0;
}