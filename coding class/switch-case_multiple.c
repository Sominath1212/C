#include<stdio.h>
#include<conio.h>
#include<math.h>
int main( ) {
    int choice1;
    char uchoice;
    long n , f = 1 , a , b;
    printf( "1-factorial \n" );
    printf( "2-squarerroot\n" );
    printf( "3-square\n" );
    printf( "4-cube\n" );
    printf( "enter your choice=" );
    scanf( "%d" , &choice1 );
    do
    {
        switch ( choice1 )
        {
            // in thise program only calculate factorial 23 numbers

        case 1:printf( "enter any number=" );
            scanf( "%ld" , &a );
            f = 1;
            for ( long i = 1; i <= a; i++ )
            {
                f = f * i;
            }
            printf( "factorial=%ld" , f );

            break;
        case 2: printf( "Enter any number=" );
            scanf( "%ld" , &a );
            int s = sqrt( a );
            printf( "%d is squarerrot " , s );
            break;
        case 3:
            printf( "Enter any number=" );
            scanf( "%ld" , &a );
            long s1 = a * a;
            printf( "srqare=%ld" , s1 );
            break;
        case 4:
            printf( "Enter any number=" );
            scanf( "%ld" , &a );
            long s2 = a * a * a;
            printf( "cube =%ld" , s2 );
            break;

        default:
            printf( "your entered wrong opration" );
            break;
        }
        fflush( stdin );
        printf( "do you want again opration=" );
        scanf( "%c" , &uchoice );
    }
    while ( uchoice == 'y' || uchoice == 'Y' );
    return 0;
}