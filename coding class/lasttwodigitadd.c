/*last two digit addition*/
#include<stdio.h>
int main( )
{
    long num , fld , sld , sum , num2;
    printf( "enter four digit number=\n" );
    scanf( "%ld" , &num );
    fld = num % 10;
    num2 = num / 10;
    sld = num2 % 10;
    sum = fld + sld;
    printf( "total addition of last two digits=%ld\n" , sum );
    return 0;



}