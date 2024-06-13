/*create structure of student and decleare two objects .
accept details and display with proper massage*/


#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name [ 30 ];
    char gen;
    float avg_marks;
    int age;

};
int main( ) {

    struct student s1 , s2;
    printf( "first student details=\n" );
    fflush( stdin );
    printf( "Enter name of student=\n" );
    gets( s1.name );
    printf( "enter id of student=\n" );
    scanf( "%d" , &s1.id );
    fflush( stdin );
    printf( "enter gender of student=\n" );
    scanf( "%c" , &s1.gen );
    printf( "Enter average marks of student=\n" );
    scanf( "%f" , &s1.avg_marks );
    printf( "enter age of student=\n" );
    scanf( "%d" , &s1.age );


    printf( "second student details=\n" );
    fflush( stdin );
    printf( "Enter name of student=\n" );
    gets( s2.name );
    printf( "enter id of student=\n" );
    scanf( "%d" , &s2.id );
    fflush( stdin );
    printf( "enter gender of student=\n" );
    scanf( "%c" , &s2.gen );
    printf( "Enter average marks of student=\n" );
    scanf( "%f" , &s2.avg_marks );
    printf( "enter age of student=\n" );
    scanf( "%d" , &s2.age );


    printf( "FIRST STUDENT:\n" );
    printf( "name:%s\n" , s1.name );
    printf( "id:%d\n" , s1.id );
    printf( "gender is:%c\n" , s1.gen );
    printf( "average marks:%f\n" , s1.avg_marks );
    printf( "age is:%d\n" , s1.age );


    printf( "SECOND STUDENT:\n" );
    printf( "name:%s\n" , s2.name );
    printf( "id:%d\n" , s2.id );
    printf( "gender is:%c\n" , s2.gen );
    printf( "average marks:%f\n" , s2.avg_marks );
    printf( "age is:%d\n" , s2.age );

    return 0;
}
