#include<stdio.h>
int main( )
{
    int km;
    long meter;
    long feet;
    printf( "enter distence in (km)=\n" );
    scanf( "%d" , &km );

    meter = km * 1000;
    printf( "meters=%ld\n" , meter );

    feet = 3280.84 * km;

    printf( "total feet =%ld" , feet );
    return 0;
}