#include<stdio.h>
int main( ) {

    int a [ 5 ] , b [ 5 ] , c [ 5 ] , i;
    printf( "enter first array element=" );
    for ( i = 0; i < 5; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    printf( "enter second array element=" );
    for ( i = 0; i < 5; i++ )
    {
        scanf( "%d" , &b [ i ] );
    }
    for ( i = 0; i < 5; i++ )
    {
        if ( a [ i ] == b [ i ] )
        {
            c [ i ] = a [ i ];

        }
    }
    for ( i = 0; i < 5; i++ )
    {
        printf( "%d\t" , c [ i ] );
    }



    return 0;
}