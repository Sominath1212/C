#include<stdio.h>
int main( ) {
    int a [ 5 ][ 5 ] , i , j , count = 0 , count2 = 0;

    printf( "enter 5*5 martix element=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        for ( j = 0; j <= 4; j++ )
        {
            scanf( "%d" , &a [ i ][ j ] );
        }
    }
    for ( i = 0; i <= 4; i++ )
    {
        for ( j = 0; j <= 4; j++ )
        {
            if ( a [ i ][ j ] % 2 == 0 )
            {
                count++;
            }
            if ( a [ i ][ j ] % 2 != 0 )
            {
                count2++;
            }
        }
    }
    if ( count == 25 )
    {
        printf( "YES\n" );
        printf( "all element are is even\n" );
    }
    else if ( count2 == 25 )
    {
        printf( "YES\n" );
        printf( "all element are is odd\n" );
    }
    else
    {
        printf( "NO\n" );
        printf( "all element are not even and not odd\n" );
    }
    return 0;
}