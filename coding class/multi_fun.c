#include<stdio.h>
int total( int s1 , int s2 , int s3 , int s4 , int s5 )
{
    int total = s1 + s2 + s3 + s4 + s5;
    return total;
}
float avg( float s )
{
    float avg = s / 5.0;
    return avg;
}
int main( ) {

    int a , b , c , d , e;
    float r , q;
    printf( "enter five subject marks=\n" );
    scanf( "%d%d%d%d%d" , &a , &c , &b , &d , &e );
    r = total( a , b , c , d , e );
    printf( "\ntotal marks=%f" , r );
    q = avg( r );
    printf( "\naverage marks=%f" , q );
    return 0;
}