#include<stdio.h>
int main( ) {
    int a [ 4 ][ 4 ] , i , j;
    int   ssum = 0;
    printf( "enter martix elements=\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            scanf( "%d" , &a [ i ][ j ] );
        }

    }

    for ( i = 0; i <= 2; i++ )
    {
        int rsum = 0;
        int csum = 0;

        for ( j = 0; j <= 2; j++ )
        {
            rsum = rsum + a [ i ][ j ];
            csum = csum + a [ j ][ i ];
        }
        a [ i ][ j ] = rsum;
        a [ j ][ i ] = csum;

        ssum = ssum + rsum + csum;

    }
    a [ i ][ j ] = ssum;

    printf( "resulten matrix=\n" );
    for ( i = 0; i <= 3; i++ )
    {
        for ( j = 0; j <= 3; j++ )
        {
            printf( "%d\t" , a [ i ][ j ] );
        }
        printf( "\n" );
    }

    return 0;
}