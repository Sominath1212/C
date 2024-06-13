/* largest of three number using conditional oprator*/
/*#include<stdio.h>
int main( )
{
    int a , b , c;
    printf( "enter any three number=\n" );
    scanf( "%d%d%d" , &a , &b , &c );
    /*if ( a > b )
    {
        if ( a > c )
        {
            printf( "%d is largest " , a );
        }
        else
        {
            printf( "%d is largest " , c );
        }

    }
    else
    {
        if ( b > c )
        {
            printf( "%d is largest number" , b );
        }
        else
        {
            printf( "%d is largest" , c );
        }

    }
    a > b ? a > c ? printf( "%d is largest" , a ) : printf( "%d is a largest" , c ) : b > c ? printf( "%d is largest" , c ) : printf( "%d is largest" , c );




    return 0;
}
*/
// largest of four number using conditional oprator
#include<stdio.h>
int main( )
{
    int a , b , c , d;
    printf( "enter any three number=\n" );
    scanf( "%d%d%d%d" , &a , &b , &c , &d );

   /* if ( a > b )
    {
        if ( a > c )
        {
            if ( a > d )
            {
                printf( "%d is largest" , a );
            }
            else
            {
                printf( "%d is largest number" , d );
            }

        }

    }
    else  if ( b > c )
    {
        if ( b > d )
        {
            printf( "%d islargest number" , b );
        }
        else
        {
            printf( "%d is largest " , d );
        }
    }
    else if ( c > d )
    {
        printf( "%d is largest number" , c );
    }
    else
    {
        printf( "%d is largest number" , d );
    }*/
    a > b ? a > c ? a > d ? printf( "%d is largest number" , a ) : b > c ? b > d ? printf( "%d is largest number" , b ) : printf( "%d is largest " , d ) : c > d ? printf( "% is largest number" , c ) : printf( "%d is largest number" , d );












    return 0;
}