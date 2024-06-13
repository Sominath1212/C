//calculate upper case latter ,lower case latter ,spaces,lines,and special symbol in such file
#include<stdio.h>
int main( ) {
    int lcount = 0 , ucount = 0 , sp = 0 , lines = 1 , scount = 0 , dcount = 0;
    FILE* fp;
    fp = fopen( "file_handling.txt" , "r" );
    if ( fp == NULL )
    {
        printf( "such file is not present\n" );
        printf( "please recreate a file \n" );
    }
    else
    {
        char ch = fgetc( fp );
        do
        {
            if ( ch != EOF )
            {
                if ( ch == ' ' )
                {
                    sp++;
                }
                else if ( ch == '\n' )
                {
                    lines++;
                }
                else if ( ch >= 'a' && ch <= 'z' )
                {
                    lcount++;
                }
                else if ( ch >= 'A' && ch <= 'Z' )
                {
                    ucount++;
                }
                else if ( ch >= '0' && ch <= '9' )
                {
                    dcount++;
                }
                else if ( ( ch >= 0 && ch <= 47 ) || ( ch >= 58 && ch <= 64 ) || ( ch >= 91 && ch <= 96 ) || ( ch >= 123 && ch <= 127 ) )
                {
                    scount++;
                }






            }

        }
        while ( ch != EOF );
        printf( "%d is upper case lattes\n" , ucount );
        printf( "%d is lower case lattes\n" , lcount );
        printf( "%d is special symbols lattes\n" , scount );
        printf( "%d is digits\n" , dcount );
        printf( "%d is lines\n" , lines );
        printf( "%d spaces in file\n" , sp );
        fclose( fp );


    }


    return 0;
}