#include<stdio.h>
int main( )
{
    float avgm;
    printf( "enter average marks of student=\n" );
    scanf( "%f" , &avgm );
    if ( avgm > 0 && avgm <= 39.00 )
    {
        printf( "F\n" );
    }
    if ( avgm >= 40.00 && avgm <= 49.99 )
    {
        printf( "C\n" );
    }
    if ( avgm >= 50.00 && avgm <= 59.99 )
    {
        printf( "B\n" );
    }
    if ( avgm >= 60.00 && avgm <= 67.99 )
    {
        printf( "A\n" );
    }
    if ( avgm >= 68.00 && avgm <= 100 )
    {
        printf( "A+\n" );
    }
    return 0;

}