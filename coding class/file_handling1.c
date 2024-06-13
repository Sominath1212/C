//write a program to write a simple massage useing fprintf() function

#include<stdio.h>
int main( ) {
    FILE* fp;
    fp = fopen( "file_handling.txt" , "w" );
    fprintf( fp , "my name is sominath girnare patil\n" );
    fprintf( fp , "i am from jalana\n" );
    fprintf( fp , "my frinde name is ram deshmukh\n" );
    fclose( fp );
    printf( "data is written...." );
    return 0;
}