#include<stdio.h>
#include<conio.h>
int main( ) {
    long i , n , s , c;
    char con;
    i = 1;

    do
    {

        printf( "enter any number=\n" );
        scanf( "%ld" , &n );
        c = n * n * n;
        printf( "cube =%ld " , c );
        s = n * n;
        printf( "square=%ld" , s );
        printf( "\nsum and cube total sum=%ld" , s + c );

        fflush( stdin );
        printf( " \nyou can do again calculate square aand cube\nenter yes for(Y/y)and no for (n/N)=" );
        scanf( "%c" , &con );
        if ( con == 'Y' || con == 'y' )
        {
            i++;
        }
        else if ( con == 'N' || con == 'n' )
        {
            printf( "thank you!" );
            break;
        }


    }
    while ( i >= 1 );


    return 0;
}