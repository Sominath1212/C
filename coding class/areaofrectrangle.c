/*calculte area of rectrangle*/
#include<stdio.h>
int main( ) {
    int l , b , area;
    printf( "enter length of rectrangle=\n" );
    scanf( "%d" , &l );
    printf( "enter breath of rectrangle=\n" );
    scanf( "%d" , &b );
    area = b * l;
    printf( "total area of rectrangle is %d" , area );
    return 0;
}