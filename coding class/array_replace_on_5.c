//write a program to accept 3x3 array and every element replace on 5.

#include<stdio.h>
#include<conio.h>
int main( )
{
    int a [ 3 ][ 3 ] , i , j;
    printf( "enter 3x3 array=\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            scanf( "%d" , &a [ i ][ j ] );
        }

    }
    printf( "*****ORIGNAL ARRAY*****\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            printf( "%d\t" , a [ i ][ j ] );
        }
        printf( "\n" );
    }

    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            a [ i ][ j ] = 5;


        }

    }
    printf( "*****UPDATED ARRAY*****\n" );
    for ( i = 0; i <= 2; i++ )
    {
        for ( j = 0; j <= 2; j++ )
        {
            printf( "%d\t" , a [ i ][ j ] );
        }
        printf( "\n" );
    }







    return 0;
}