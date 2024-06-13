// basic calculater for perform all arithmetic oprations
//thise calculater is only compiler
#include<stdio.h>
#include<conio.h>
int main( )
{
    int a , b , ans;
    printf( "enter first number =\n" );
    scanf( "%d" , &a );
    fflush( stdin );
    printf( "enter oprator =\n" );
    char oprator;
    scanf( "%c" , &oprator );
    printf( "enter second number=\n" );
    scanf( "%d" , &b );

    switch ( oprator )
    {
    case '+':
        ans = a + b;
        printf( "Ans:%d" , ans );
        break;
    case '-':
        ans = a - b;
        printf( "Ans:%d" , ans );
        break;
    case '*':
        ans = a * b;
        printf( "Ans:%d" , ans );
        break;
    case '/':
        ans = a / b;
        printf( "Ans:%d" , ans );
        break;
    case '%':
        ans = a % b;
        printf( "Ans:%d" , ans );
        break;

    default:printf( "enter currect opration\n" );
        break;
    }

    return 0;
}