/*convert string in the lower case to upper case and upper case to lower case*/
#include<stdio.h>
int main( ) {
    char a [ 100 ];
    printf( "enter any string =\n" );
    gets( a );
    int i = 0;
    while ( a [ i ] != 0 )
    {
        if ( a [ i ] >= 'A' && a [ i ] <= 'Z' )
        {
            a [ i ] = a [ i ] + 32;
        }
        else if ( a [ i ] >= 'a' && a [ i ] <= 'z' )
        {
            a [ i ] = a [ i ] - 32;
        }

        i++;
    }
    printf( "updated string =\n" );
    printf( "%s" , a );

    return 0;
}