#include<stdio.h>
#include<conio.h>
void main( )
{
    int a , b , c , ch;
    printf( "enter two number" );
    scanf( "%d%d" , &a , &b );
    printf( "enter choise" );
    scanf( "%d" , &ch );
    switch ( ch )
    {
    case 1: c = a + b;
        printf( "%d" , c );
        break;
    case 2:c = a - b;
        printf( "%d" , c );
        break;
    case 3: c = a * b;
        printf( "%d" , c );
        break;
    case 4: c = a / b;
        break;
    default:printf( "invalid choise" );
    }
    getch( );
}