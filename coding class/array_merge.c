/*merge two array in to thard array*/
#include<stdio.h>
int main( ) {
    int a [ 5 ] , b [ 5 ] , merge [ 10 ] , i;
    printf( "enter first array element=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    printf( "enter second array element=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        scanf( "%d" , &b [ i ] );
    }
    for ( i = 0; i <= 4; i++ )
    {
        merge [ i ] = a [ i ];
    }
    for ( int j = 0; j <= 4; j++ )
    {
        merge [ i ] = b [ j ];
        i++;
    }
    printf( "merge array =\n" );
    for ( i = 0; i <= 9; i++ )
    {
        printf( "%d\t" , merge [ i ] );
    }



    return 0;
}