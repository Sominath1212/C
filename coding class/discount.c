#include<stdio.h>
int main( )
{

    long  value , discount , final_price;
    printf( "enter prince=\n" );
    scanf( "%ld" , &value );
    discount = ( value / 100 ) * 15;
    final_price = value - discount;
    printf( "final price =%ld\n" , final_price );
   //printf( "final price =%ld\n" , discount );


    return 0;
}
