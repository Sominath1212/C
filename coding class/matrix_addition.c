/*write program to preformed matrix addition*/
#include<stdio.h>
int main( ) {
    int a [ 3 ][ 3 ] , b [ 3 ][ 3 ] , c [ 3 ][ 3 ] , i , j;
    printf( "enter first matrix element =\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            scanf( "%d" , &a [ i ][ j ] );
        }

    }
    printf( "enter second matrix element =\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            scanf( "%d" , &b [ i ][ j ] );
        }

    }
    printf( "first matrix=\n" );

    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            printf( "%d\t" , a [ i ][ j ] );
        }
        printf( "\n" );
    }
    printf( "second matrix=\n" );

    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            printf( "%d\t" , b [ i ][ j ] );
        }
        printf( "\n" );
    }
    //addition matrix

    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            c [ i ][ j ] = a [ i ][ j ] + b [ i ][ j ];
        }

    }

    printf( "addition matrix=\n" );

    
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            printf( "%d\t" , c [ i ][ j ] );
        }
        printf( "\n" );

    }
    return 0;
}