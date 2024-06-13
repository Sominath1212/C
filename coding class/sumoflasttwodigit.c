/*write a program to accept number from the user and calculate sum of last two digit*/
#include<stdio.h>
int main( ) {
    long num;
    printf( "enter any number=\n" );
    scanf( "%ld" , &num );
    int a = num % 10;
    num = num / 10;
    int b = num % 10;
    int sum = a + b;
    printf( "last digit sum is %d" , sum );
    return 0;
}