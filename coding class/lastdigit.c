#include<stdio.h>
int main( )
{
    int n1 , n2;
    int fmod , smod;
    printf( "enter first number=\n" );
    scanf( "%d" , &n1 );
    printf( "enter second number=\n" );
    scanf( "%d" , &n2 );

    fmod = n1 % 10;
    printf( "the %d in value last digit is%d\n" , n1 , fmod );
    smod = n2 % 10;
    printf( "the %d in value last digit is%d\n" , n2 , smod );
    int total = fmod + smod;
    printf( "total moduls addition is %d" , total );
    return 0;

}