/*4 digit number is print reverce order
inout =1234
output=4321
*/
#include<stdio.h>
int main( ) {
    int num;
    int i;
    printf( "enter any 4 digit number=\n" );
    scanf( "%d" , &num );
    int a = num % 10;
    num = num / 10;
    int b = num % 10;
    num = num / 10;
    int c = num % 10;
    num = num / 10;
    int sum = ( a * 1000 ) + ( b * 100 ) + ( c * 10 ) + num;
    printf( "number reverce=%d" , sum );
    return 0;
}