/* Program for Newton-Gregory forward difference interpolation formula */

#include<stdio.h>
#include<conio.h>
#define MaxN 100
#define Order_of_diff 4
void main( )
{
    float arr_x [ MaxN + 1 ] , arr_y [ MaxN + 1 ] , numerator = 1.0 , denominator = 1.0 , x , y , p , h ,
        diff_table [ MaxN + 1 ][ Order_of_diff + 1 ];
    int i , j , n , k;

    printf( "_________________________________________________________________ \n" );
    printf( "Enter the value of n: \n" );
    scanf( "%d" , &n );
    printf( "Enter the values of x and y:\n" );
    for ( i = 0; i < n; i++ )
        scanf( "%f%f" , &arr_x [ i ] , &arr_y [ i ] );
    printf( "Enter the value of x at which value of y is to be calculated:" );
    scanf( "%f" , &x );
    h = arr_x [ 1 ] - arr_x [ 0 ];
    for ( i = 0; i <= n - 1; i++ )
        diff_table [ i ][ 1 ] = arr_y [ i + 1 ] - arr_y [ i ];/*Creating the difference table and calculating first order
        differences*/
    for ( j = 2; j <= Order_of_diff; j++ )/*Calculating higher order differences*/
        for ( i = 0; i <= n - j; i++ )
            diff_table [ i ][ j ] = diff_table [ i + 1 ][ j - 1 ] - diff_table [ i ][ j - 1 ];
    i = 0;
    while ( !( arr_x [ i ] > x ) ) /* Finding x0 */
        i++;
    i--;
    p = ( x - arr_x [ i ] ) / h;
    y = arr_y [ i ];
    for ( k = 1; k <= Order_of_diff; k++ )
    {

        numerator *= p - k + 1;
        denominator *= k;
        y += ( numerator / denominator ) * diff_table [ i ][ k ];
    }
    printf( "When x=%6.1f, y=%6.2f" , x , y );
    getch( );
}