/*merge two string in thard string*/
#include<stdio.h>
int main( ) {
    char str1 [ 100 ] , str2 [ 100 ] , str3 [ 200 ] , i;
    printf( "enter first srting =\n" );
    gets( str1 );
    printf( "enter second string =\n" );
    gets( str2 );
    i = 0;
    while ( str1 [ i ] != '\0' )
    {

        str3 [ i ] = str1 [ i ];
        i++;
    }
    int j = 0;
    while ( str2 [ j ] != '\0' )
    {

        str3 [ i ] = str2 [ j ];
        i++;
        j++;

    }
    printf( "Updated string=\n" );
    printf( "%s" , str3 );


    return 0;
}