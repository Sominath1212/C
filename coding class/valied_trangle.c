/* accept three side of trangle and display thise trangale valied or not*/
/*[note:valied trangle all side sum is 180]*/
#include<stdio.h>
int main( ) {
    int a , b , c;
    printf( "enter trangle first side=\n" );
    scanf( "%d" , &a );
    printf( "enter trangle second side=\n" );
    scanf( "%d" , &b );
    printf( "enter thard side of trangle=\n" );
    scanf( "%d" , &c );
    if ( a + b + c == 180 )
    {
        printf( "trangle is valied\n" );
    }
    else
    {
        printf( "trangle is not valied\n" );
    }
    return 0;
}