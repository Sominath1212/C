/*copy data one file to another file*/
#include<stdio.h>
int main( ) {
    FILE* fpr = NULL , * fpw;
    char ch;

    fpr = fopen( "file_handling.txt" , "r" );
    fpw = fopen( "textfile.txt" , "w" );

    if ( fpr == NULL )
    {
        printf( "such file is not present\n" );
    }
    else
    {
        do

        {
            if ( ch != EOF )
            {
                fputc( ch , fpw );
            }


        }
        while ( ch != EOF ); fclose( fpr );
        fclose( fpw );
        printf( "data is copied...." );
    }



    return 0;
}