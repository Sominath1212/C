/*minutes is h:m formate*/
#include<stdio.h>
int main( ) {
    int m;
    printf( "Enter minutes=\n" );
    scanf( "%d" , &m );
    int h = m / 60;
    int a = m % 60;
    printf( "%d:%d\n" , h , a );

    return 0;
}