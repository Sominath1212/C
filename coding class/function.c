#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int addition( int a , int b )
{
    return a + b;
}
int subtraction( int a , int b )
{
    return a - b;
}
int multiplication( int a , int b )
{
    return a * b;
}
int division( int a , float b )
{
    return a / b;
}
int largest( int a , int b )
{
    int temp;
    if ( b < a )
    {
        temp = a;
    }
    else
    {
        temp = b;
    }
    return temp;
}
int smallest( int a , int b )
{
    if ( a < b )
    {
        return a;
    }
    else
    {
        return b;
    }

}
int factorial( long n )
{
    long f = 1;
    for ( long i = 1; i <= n; i++ )
    {
        f = f * i;
    }
    return f;

}
int square( int n )
{
    int s;
    s = n * n;
    return s;
}
int cube( int a )
{
    int c;
    c = a * a * a;
    return c;
}
void prime( int n )
{
    int flag = 1;
    for ( int i = 2; i < n; i++ )
    {
        if ( n % i == 0 )
        {
            printf( "%d is not prime number\n" , n );
            flag++;
            break;
        }

    }
    if ( flag == 1 )
    {
        printf( "%d is prime number\n" , n );
    }
}
int main( ) {
    do {
        int a , b , c , n;
        char choice1 , choice2;
        printf( "1-arithmatic opration\n" );
        printf( "2-logical opration\n" );
        printf( "3-other opration\n" );
        printf( "enter currect opration=" );
        scanf( "%d" , &choice1 );
        switch ( choice1 )
        {
        case 1://arithmatic operation
            printf( "1-addition\n" );
            printf( "2-subtracation\n" );
            printf( "3-multiplication\n" );
            printf( "4-division\n" );
            printf( "Enter currect arithmatic opration=" );
            scanf( "%d" , &choice2 );
            switch ( choice2 )
            {
            case 1:

                printf( "enter any two number=" );
                scanf( "%d%d" , &a , &b );
                c = addition( a , b );
                printf( "total addition=%d" , c );
                break;
            case 2:

                printf( "enter any two number=" );
                scanf( "%d%d" , &a , &b );
                c = subtraction( a , b );
                printf( "total subtracaton=%d" , c );
                break;
            case 3:

                printf( "enter any two number=" );
                scanf( "%d%d" , &a , &b );
                c = multiplication( a , b );
                printf( "total multiplication=%d" , c );
                break;

            case 4:

                printf( "enter any two number=" );
                scanf( "%d%d" , &a , &b );
                c = division( a , b );
                printf( "total division =%d" , c );
                break;
            default:printf( "you enter wrong opration\npleace enter correct arithmatic opration\n" );
                break;
            }
            break;
        case 2:
        //logical opration
            printf( "1-largest number\n" );
            printf( "2-smallest number\n" );
            printf( "enter currect logical opration=" );
            scanf( "%d" , &choice2 );
            switch ( choice2 )
            {
            case 1:

                printf( "enter any two number=" );
                scanf( "%d %d" , &a , &b );
                c = largest( a , b );
                printf( "%d is largeast number" , c );

                break;
            case 2:

                printf( "enter any two number=" );
                scanf( "%d%d" , &a , &b );
                c = smallest( a , b );
                printf( "%d is smallest number" , c );
                break;
            default:printf( "enter currect logical opration\n" );
                break;
            }
            break;
        case 3://other oprations
            printf( "1-factorial\n" );
            printf( "2-square\n" );
            printf( "3-cube\n" );
            printf( "4-chexk number prime or not\n" );
            printf( "Enter currect opration=" );
            scanf( "%d" , &choice2 );
            switch ( choice2 )
            {
            case 1:

                printf( "enter any number=" );
                scanf( "%d" , &n );
                c = factorial( n );
                printf( "total factorial =%d" , c );
                break;
            case 3:

                printf( "Enter any number=" );
                scanf( "%d" , &n );
                c = cube( n );
                printf( "total cube =%d" , c );
                break;

            case 2:

                printf( "Enter any number=" );
                scanf( "%d" , &n );
                c = square( n );
                printf( "total square =%d" , c );
                break;
            case 4:

                printf( "enter any number=" );
                scanf( "%d" , &n );
                prime( n );
                break;
            default:printf( "enter currect operation\n" );
                break;
            }
            break;

        default:printf( "enter currect opration\n" );
            break;
        }
        char again;
        fflush( stdin );
        printf( "\ndo want again performe any opration=" );
        scanf( "%c" , &again );
        if ( again == 'y' || again == 'Y' )
        {
            again++;
        }
        else if ( again == 'n' || again == 'N' )
        {
            exit( 0 );
        }
    }
    while ( 1 );

    return 0;
}