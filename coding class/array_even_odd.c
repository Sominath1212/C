/*write a progrma to accept array element 5 and distribute even and odd element */
#include<stdio.h>
#include<conio.h>
int main( )
{
    int a [ 5 ] , ea [ 5 ] , oa [ 5 ] , i;
    printf( "Enter array element=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    printf( "*************EVEN ELEMENT*********\n" );
    for ( i = 0; i <= 4; i++ )
    {
        if ( a [ i ] % 2 == 0 )
        {
            ea [ i ] = a [ i ];
            printf( "%d\t" , ea [ i ] );
        }

    }
    printf( "\n***********ODD ELEMENT*********\n" );

    printf( "\n" );
    for ( i = 0; i <= 4; i++ )
    {
        if ( a [ i ] % 2 != 0 )
        {
            oa [ i ] = a [ i ];
            printf( "%d\t" , oa [ i ] );
        }
    }
    return 0;
}