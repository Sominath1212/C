#include<stdio.h>
void arithmatic( int x , int y , int* p1 , int* p2 , int* p3 , int* p4 )
{
    *p1 = x + y;
    *p2 = x - y;
    *p3 = x * y;
    *p4 = x / y;
}
int main( ) {

    int a , b , c , d , e , f;
    printf( "Enter 2 number=" );
    scanf( "%d%d" , &a , &b );
    arithmatic( a , b , &c , &d , &e , &f );
    printf( "total addition=%d" , c );
    printf( "total subtraction=%d" , d );
    printf( "total multiplication=%d" , e );
    printf( "total division =%d" , f );
    return 0;
}