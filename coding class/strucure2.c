//write a program to defind structure and store 5 student details
\//print five student details


#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    char name [ 30 ];
    int age;
    int sub1 , sub2 , sub3;
    int total_mark;
    float per;
    int class;
};
int main( )
{
    struct student s1 , s2 , s3 , s4 , s5;
    printf( "\n******STUDENT DETAILS*****\n" );
    //first student 
    fflush( stdin );
    printf( "Enter first student name:\n" );
    gets( s1.name );
    printf( "Enter class of first student:\n" );
    scanf( "%d" , &s1.class );
    printf( "ente age of first student:\n" );
    scanf( "%d" , &s1.age );
    printf( "enter first student three subject marks:\n" );
    scanf( "%d%d%d" , &s1.sub1 , &s1.sub2 , &s1.sub3 );
    s1.total_mark = s1.sub1 + s1.sub2 + s1.sub3;
    s1.per = s1.total_mark / 3.0;
    //second student
    fflush( stdin );
    printf( "Enter second student name:\n" );
    gets( s2.name );
    printf( "Enter class of second student:\n" );
    scanf( "%d" , &s2.class );
    printf( "ente age of second student:\n" );
    scanf( "%d" , &s2.age );
    printf( "enter second student three subject marks:\n" );
    scanf( "%d%d%d" , &s2.sub1 , &s2.sub2 , &s2.sub3 );
    s2.total_mark = s2.sub1 + s2.sub2 + s2.sub3;
    s2.per = s2.total_mark / 3.0;

    //thard student 
    fflush( stdin );
    printf( "Enter thard student name:\n" );
    gets( s3.name );
    printf( "Enter class of thard student:\n" );
    scanf( "%d" , &s3.class );
    printf( "ente age of thard student:\n" );
    scanf( "%d" , &s3.age );
    printf( "enter thard student three subject marks:\n" );
    scanf( "%d%d%d" , &s3.sub1 , &s3.sub2 , &s3.sub3 );
    s3.total_mark = s3.sub1 + s3.sub2 + s3.sub3;
    s3.per = s3.total_mark / 3.0;
    //forth student
    fflush( stdin );
    printf( "Enter forth student name:\n" );
    gets( s4.name );
    printf( "Enter class of forth student:\n" );
    scanf( "%d" , &s4.class );
    printf( "ente age of forth student:\n" );
    scanf( "%d" , &s4.age );
    printf( "enter forth student three subject marks:\n" );
    scanf( "%d%d%d" , &s4.sub1 , &s4.sub2 , &s4.sub3 );
    s4.total_mark = s4.sub1 + s4.sub2 + s4.sub3;
    s4.per = s4.total_mark / 3.0;

    // fifth student
    fflush( stdin );
    printf( "Enter fifth student name:\n" );
    gets( s5.name );
    printf( "Enter class of fifth student:\n" );
    scanf( "%d" , &s5.class );
    printf( "ente age of fifth student:\n" );
    scanf( "%d" , &s5.age );
    printf( "enter fifth student three subject marks:\n" );
    scanf( "%d%d%d" , &s5.sub1 , &s5.sub2 , &s5.sub3 );
    s5.total_mark = s5.sub1 + s5.sub2 + s5.sub3;
    s5.per = s5.total_mark / 3.0;


    // printing
    printf( "\n******STUDENT DETAILS*******\n" );

    printf( "FIRST STUDENT :\n" );
    printf( "Name:%s\n" , s1.name );
    printf( "Class:%d\n" , s1.class );
    printf( "Age:%d\n" , s1.age );
    printf( "Total marks:%d\n" , s1.total_mark );
    printf( "Total percentage:%f\n" , s1.per );
    printf( "\n------------------------------------\n" );
    //second student
    printf( "SECOND STUDENT :\n" );
    printf( "Name:%s\n" , s2.name );
    printf( "Class:%d\n" , s2.class );
    printf( "Age:%d\n" , s2.age );
    printf( "Total marks:%d\n" , s2.total_mark );
    printf( "Total percentage:%f\n" , s2.per );
    printf( "\n------------------------------------\n" );
    // thard student
    printf( "THARD STUDENT :\n" );
    printf( "Name:%s\n" , s3.name );
    printf( "Class:%d\n" , s3.class );
    printf( "Age:%d\n" , s3.age );
    printf( "Total marks:%d\n" , s3.total_mark );
    printf( "Total percentage:%f\n" , s3.per );
    printf( "\n------------------------------------\n" );
    //fourth student
    printf( "FORTH STUDENT :\n" );
    printf( "Name:%s\n" , s4.name );
    printf( "Class:%d\n" , s4.class );
    printf( "Age:%d\n" , s4.age );
    printf( "Total marks:%d\n" , s4.total_mark );
    printf( "Total percentage:%f\n" , s4.per );
    printf( "\n------------------------------------\n" );
    //fifth student
    printf( "FIFTH STUDENT :\n" );
    printf( "Name:%s\n" , s5.name );
    printf( "Class:%d\n" , s5.class );
    printf( "Age:%d\n" , s5.age );
    printf( "Total marks:%d\n" , s5.total_mark );
    printf( "Total percentage:%f\n" , s5.per );
    printf( "\n------------------------------------\n" );

    return 0;
}