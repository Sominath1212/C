#include<stdio.h>
#include<conio.h>
int main( ) {
    char name [ 40 ];
    int age;
    float avg_marks;
    fflush( stdin );
    printf( "enter student name=\n" );
    scanf( "%s" , &name );
    fflush( stdin );
    printf( "enter student age =\n" );
    scanf( "%d" , &age );
    printf( "enter student average marks=\n" );
    scanf( "%f" , &avg_marks );
    printf( "student name is: %s\n" , name );
    printf( "student average marks is: %f\n" , avg_marks );
    printf( "student age is: %d\n" , age );


    return 0;
}