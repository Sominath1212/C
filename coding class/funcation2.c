/*funcation second categary program*/
#include <stdio.h>
#include <math.h>
void addition( int a , int b );
void sub( int a , int b );
void multi( int a , int b );
void div( int a , int b );
void squareroot( int a );
void power( int a );
void seil( float a );
void fluare( float a );
int main( )
{
    int a , b;
    char ch;
    printf( "c=ceil\nf=floor\np=power\ns=squareroot\n+ =addition\n - =subtracation\n * =multiplication\n / = division\n" );
    printf( "enter opration=\n" );
    scanf( "%c" , &ch );
    if ( ch == '+' )
    {
        addition( a , b );
    }
    else if ( ch == '-' )
    {
        sub( a , b );
    }
    else if ( ch == '*' )
    {
        multi( a , b );
    }
    else if ( ch == '/' )
    {
        div( a , b );
    }
    else if ( ch == 's' )
    {
        squareroot( a );
    }

    else if ( ch == 'c' )
    {
        seil( a );
    }
    else if ( ch == 'f' )

    {
        fluare( a );
    }
    else if ( ch == 'p' )
    {
        power( a );
    }
    else
    {
        printf( "your enter wrong opration\n" );
    }
    return 0;
}
void addition( int a , int b )
{
    printf( "enter any two number=\n" );
    scanf( "%d%d" , &a , &b );
    printf( "total addition=%d" , a + b );
}
void sub( int a , int b )
{
    printf( "enter any two number=\n" );
    scanf( "%d%d" , &a , &b );
    printf( "total subtraction=%d" , a - b );
}
void multi( int a , int b )
{
    printf( "enter any two number=\n" );
    scanf( "%d%d" , &a , &b );
    printf( "total multiplication=%d" , a * b );
}
void div( int a , int b )
{
    printf( "enter any two number=\n" );
    scanf( "%d%d" , &a , &b );
    printf( "total divsion=%d" , a / b );
}
void power( int a )
{
    printf( "enter any number=\n" );
    scanf( "%d" , &a );
    int c = pow( a , 2 );
    printf( "total power=%d" , c );
}
void squareroot( int a )
{
    printf( "enter any  number=\n" );
    scanf( "%d" , &a );
    int c = sqrt( a );
    printf( "total squarerrot=%d" , c );
}
void fluare( float a )
{
    printf( "enter any float number=\n" );
    scanf( "%f" , &a );
    float c = floor( a );
    printf( "total floor=%f" , c );
}
void seil( float a )
{
    printf( "enter any float number=\n" );
    scanf( "%f" , &a );
    float c = ceil( a );
    printf( "total ceil=%f" , c );
}