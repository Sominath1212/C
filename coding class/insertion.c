//write a program for insertion oprstion
/*thise program to perform insertion opration*/
#include<stdio.h>
int main( )
{
    int a [ 5 ] , i , index , e;
    int temp;
    printf( "Enter array element of array=\n" );
    for ( i = 0; i < 4; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    printf( "enter index number for insertion=\n" );
    scanf( "%d" , &index );
    printf( "enter element for insertion=\n" );
    scanf( "%d" , &e );
    printf( "\n******oprignal array*****\n" );
    for ( i = 0; i < 4; i++ )
    {
        scanf( "%d" , &a [ i ] );
    }
    printf( "\n*****updated array******\n" );
    for ( i = 0; i <= 4; i++ )
    {
        if ( i == index )
        {
            temp = a [ i ];
            a [ i ] = e;
            e = temp;
            index++;
        }
        printf( "%d\t" , a [ i ] );

    }





    return 0;
}