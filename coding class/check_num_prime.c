#include<stdio.h>
int main( ) {
    int i , n , flag = 1;
    printf( "enter any number=" );
    scanf( "%d" , &n );
    for ( i = 2; i < n; i++ )
    {
        if ( n % i == 0 )
        {
            printf( "number is not prime\n" );
            flag = 2;
            break;
        }

    }
    if ( flag == 1 )
    {
        printf( "number is prime" );
    }


    return 0;
}