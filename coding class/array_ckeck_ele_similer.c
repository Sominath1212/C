#include<stdio.h>
int main( )
{


    int a [ 5 ][ 5 ] , i , j;
    int count = 0;
    printf( "enter element for array=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        for ( j = 0; j <= 4; j++ )
        {
            scanf( "%d" , &a [ i ][ j ] );
        }
    }
    printf( "enter matrix=\n" );
    for ( i = 0; i <= 4; i++ )
    {
        for ( j = 0; j <= 4; j++ )
        {
            printf( "%d\t" , a [ i ][ j ] );
        }
        printf( "\n" );
    }
    printf( "\n" );
    for ( i = 0; i <= 4; i++ )
    {
        int temp = a [ 0 ][ 0 ];
        for ( j = 0; j <= 4; j++ )
        {
            if ( a [ i ][ j ] == temp )
            {
                count++;
            }

        }
    }
    if ( count == 25 )
    {
        printf( "All element are similer\n" );
    }
    else
    {
        printf( "all element are not similer\n" );
    }



    return 0;

}