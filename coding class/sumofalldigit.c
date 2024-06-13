/*write a program  for  calculate each all digit sum*/
#include<stdio.h>
int main( ) {
    int number;
    printf( "enter any number =\n" );
    scanf( "%d" , &number );
    int sum = 0;
    int i = 0;

    while ( number > 0 )
    {
        int a = number % 10;
        number = number / 10;
        sum = sum + a;
        i++;
    }
    printf( "total sum of digits %d" , sum );
    return 0;
}