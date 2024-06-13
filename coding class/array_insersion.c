//in
#include<stdio.h>
void main( )
{

    int a [ 10 ] , i , index , n;
    int temp;
    printf( "enter element for array =\n" );
    for ( i = 0; i <= 8; i++ ) {
        scanf( "%d" , &a [ i ] );

    }
    printf( "enter element for insertion=\n" );
    scanf( "%d" , &n );
    printf( "enter index number=\n" );
    scanf( "%d" , &index );

    for ( i = 0; i <= 9; i++ )
    {
        if ( i == index )
        {

            temp = a [ i ];
            a [ i ] = n;
            n = temp;
            index++;

        }
        printf( "%d\t" , a [ i ] );
    }
}