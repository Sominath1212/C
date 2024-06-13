#include<stdio.h>
#include<conio.h>
struct student
{
    char name [ 20 ];
    char gen;
    int rollno;
    float avg_marks;
};
int main( )
{
    struct student s1 , s2 , s3;
    printf( "enter first student details\n" );
    fflush( stdin );
    printf( "enter student name =\n" );
    gets( s1.name );
    fflush( stdin );
    printf( "enter  gender of the student =\n" );
    scanf( "%c" , &s1.gen );
    printf( "enter roll no of the student =\n" );
    scanf( "%d" , &s1.rollno );
    printf( "enter average marks of the student =\n" );
    scanf( "%f" , &s1.avg_marks );


    printf( "enter second student details=\n" );
    fflush( stdin );
    printf( "enter student name =\n" );
    gets( s2.name );
    fflush( stdin );
    printf( "enter  gender of the student =\n" );
    scanf( "%c" , &s2.gen );
    printf( "enter roll no of the student =\n" );
    scanf( "%d" , &s2.rollno );
    printf( "enter average marks of the student =\n" );
    scanf( "%f" , &s2.avg_marks );


    printf( "enter thard student details=\n" );
    fflush( stdin );
    printf( "enter student name =\n" );
    gets( s3.name );
    fflush( stdin );
    printf( "enter  gender of the student =\n" );
    scanf( "%c" , &s3.gen );
    printf( "enter roll no of the student =\n" );
    scanf( "%d" , &s3.rollno );
    printf( "enter average marks of the student =\n" );
    scanf( "%f" , &s3.avg_marks );



    printf( "\nfirst student details:\n" );
    printf( "name is: %s\n" , s1.name );
    printf( "gender is:%c\n" , s1.gen );
    printf( "roll no is :%d\n" , s1.rollno );
    printf( "average marks:%f\n" , s1.avg_marks );


    printf( "\nsecond student details:\n" );
    printf( "name is: %s\n" , s2.name );
    printf( "gender is:%c\n" , s2.gen );
    printf( "roll no is :%d\n" , s2.rollno );
    printf( "average marks:%f\n" , s2.avg_marks );


    printf( "\nthard student details:\n" );
    printf( "name is: %s\n" , s3.name );
    printf( "gender is:%c\n" , s3.gen );
    printf( "roll no is :%d\n" , s3.rollno );
    printf( "average marks:%f\n" , s3.avg_marks );





    if ( s1.avg_marks > s2.avg_marks && s1.avg_marks > s3.avg_marks )
    {
        printf( "\n%s is topper\n" , s1.name );
    }
    else if ( s2.avg_marks > s1.avg_marks && s2.avg_marks > s3.avg_marks )
    {
        printf( "\n%s is topper\n" , s2.name );
    }
    else
    {
        printf( "\n%s is topper\n" , s3.name );
    }




    return 0;
}