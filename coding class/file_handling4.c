//write and print file data
// EOF mince end of file and it's ascii value is -1
//compiler is already known
#include<stdio.h>
int main( ) {
    FILE* fp = NULL;
    char ch;
    fp = fopen( "file_handling.txt" , "r" );
    if ( fp == NULL )
    {
        printf( "file is not exist\n" );
        printf( "file is open in write mode\n" );
    }
    else
    {
        do
        {
            ch = fgetc( fp );

            if ( ch != '\0' )
            {
                printf( "%c" , ch );
            }

        }
        while ( ch != EOF );
        fclose( fp );
    }



    return 0;
}