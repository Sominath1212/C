//count number of charecters in file
#include<stdio.h>
int main( ) {
    FILE* fp = NULL;
    char ch;
    int count = 0;
    fp = fopen( "file_handling.txt" , "r" );
    if ( fp == NULL )
    {
        printf( "file is not present\n" );
    }
    else
    {

        do
        {
            ch = fgetc( fp );
            if ( ch != EOF )
            {
                count++;
            }

        }
        while ( ch != EOF );

        printf( "%d  is charecter in such file\n" , count );
        fclose( fp );
    }
    return 0;
}