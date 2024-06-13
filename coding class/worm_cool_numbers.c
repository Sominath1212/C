#include<stdio.h>
#include<conio.h>
int main( ) {
    int a [ 100 ];
    int flag = 0;
    printf( "Enter array elements=\n" );
    int i = 0;
    while ( 1 )
    {

        scanf( "%d" , &a [ i ] );

        if ( a [ i ] < 0 )
        {

            break;
        }
        i++;

    }

    printf( "\n-------------------------------------------------------\n" );
    printf( "cool numbers\n" );
    i = 0;
    while ( i <= 99 )
    {

        if ( a [ i ] < 0 )
        {

            break;
        }
        if ( a [ i ] % 4 == 0 )
        {
            int temp;
            temp = a [ i ];
            a [ i ] = -6;
            printf( "%d\t" , a [ i ] );

        }



        i++;
    }

    printf( "\n--------------------------------------------------------\n" );
    printf( "worm numbers\n" );
    int k = 0;
    while ( k <= 99 )
    {



        if ( a [ k ] < 0 )
        {

            break;
        }
        if ( a [ k ] > 47 )
        {
            int temp;
            temp = a [ k ];
            a [ k ] = -3;
            printf( "%d\t" , a [ k ] );
        }

        k++;
    }

    printf( "\n--------------------------------------------------------\n" );
    printf( "worm and cool numbers= \n" );
    int j = 0;
    while ( j <= 99 )
    {



        if ( a [ j ] < 0 )
        {

            break;
        }
        if ( a [ j ] > 47 || a [ j ] % 4 == 0 )
        {
            int temp;
            temp = a [ j ];
            a [ j ] = -7;
            printf( "%d\t" , a [ j ] );
        }

        j++;
    }

    return 0;
}