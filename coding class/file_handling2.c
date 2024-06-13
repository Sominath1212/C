//accept a syring from the user and write into use fputc() method
#include<stdio.h>
int main( ) {
    //NULL is value computer know already

    char str [ 25 ];
    printf( "enter any string =\n" );
    gets( str );
    FILE* fp = NULL;
    fp = fopen( "file_handling.txt" , "w" );
    int i = 0;
    while ( str [ i ] != '\0' )
    {
        fputc( str [ i ] , fp );
        i++;

    }
    fclose( fp );
    printf( "data is written....." );


    return 0;
}