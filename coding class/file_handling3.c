//accept detail for student and display with proper massage in the file
#include<stdio.h>
#include<conio.h>

int main( ) {
    int age;
    float avg_m;
    char name [ 10 ];
    char gen;
    printf( "enter age of student=\n" );
    scanf( "%d" , &age );
    fflush( stdin );
    printf( "enter student name=\n" );
    gets( name );
    printf( "enter average marks of student=\n" );
    scanf( "%f" , &avg_m );
    fflush( stdin );
    printf( "enter gender of student=\n" );
    scanf( "%c" , &gen );
    //NULL is value computer already know

    FILE* fp = NULL;
    fp = fopen( "file_handling.txt" , "w" );
    fprintf( fp , "%d is age of student\n" , age );
    fprintf( fp , "name:%s\n" , name );
    fprintf( fp , "%f is average marks of student\n" , avg_m );
    fprintf( fp , "%c is gender of student\n" , gen );
    fclose( fp );
    printf( "data is written...." );


    return 0;
}