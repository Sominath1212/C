#include <stdio.h>
int main( )
{

    int i , j , k , n;
    float A [ 20 ][ 20 ] , c , x [ 10 ] , sum = 0.0;
    printf( "enter the order of matrix:" );
    scanf( "%d" , &n );
    printf( "enter the order of augmented matrix row-wise :\n\n" );
    for ( i = 1; i <= n; i++ )
    {
        for ( j = 1; j <= ( n + 1 ); j++ )
        {
            printf( "A[%d][%d]" , i , j );
            scanf( "%f" , &A [ i ][ j ] );
        }
    }
    /* loop of the  upper tringuler matrix*/
    for ( j = 1; j <= n; j++ )
    {
        for ( i = 1; i <= n; i++ )
        {
            if ( i > j )
            {
                c = A [ i ][ j ] / A [ j ][ i ];
                for ( k = 1; k <= n + 1; k++ )
                {
                    A [ i ][ k ] = A [ i ][ k ] - c * A [ j ][ k ];
                }
            }
        }
    }
    x [ n ] = A [ n ][ n + 1 ] / A [ n ][ n ];
    /* this loop is for backward subtitution*/
    for ( i = n - 1; i >= 1; i-- )
    {
        sum = 0;
        for ( j = i + 1; j <= n; j++ )
        {
            sum = sum + A [ i ][ j ] * x [ j ];
        }
        x [ i ] = ( A [ i ][ n + 1 ] - sum ) / A [ i ][ i ];
    }
    printf( "thew solution is:" );
    for ( i = 1; i <= n; i++ )
    {
        // x1,x2
        printf( "x%d=%d\t" , i , x [ i ] );
    }

    return 0;
}