
/*write prgram for givr 15% discount of amount is greater than 1000*/
#include<stdio.h>
int main( ) {
    int amount;
    int s;
    printf( "enter amount =\n" );
    scanf( "%d" , &amount );
    if ( amount >= 1000 )
    {
        s = ( amount / 100 ) * 15;
        amount = amount - s;
        printf( "total amonut for pay %d" , amount );
    }
    else
    {
        printf( "you don't have a discount\n" );
    }

    return 0;
}