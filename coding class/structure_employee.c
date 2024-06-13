/*create a structure of employees and declare two objects
accept detail of an employees and display with proper massage*/
#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char name [ 50 ];
    long salary;
    char gen;
    int age;

};
int main( )
{
    struct employee e1 , e2;

    printf( "enter detail of first employee=\n" );
    fflush( stdin );
    printf( "enter name of an employee=\n" );
    gets( e1.name );
    printf( "enter id of employee=\n" );
    scanf( "%d" , &e1.id );
    printf( "Enter salary of an employee=\n" );
    scanf( "%ld" , &e1.salary );
    fflush( stdin );
    printf( "Enter gender of an employee=\n" );
    scanf( "%c" , &e1.gen );
    printf( "Enter age of an employee=\n" );
    scanf( "%d" , &e1.age );


    //second employee details
    printf( "enter detail of second employee=\n" );
    fflush( stdin );
    printf( "enter name of an employee=\n" );
    gets( e2.name );
    printf( "enter id of employee=\n" );
    scanf( "%d" , &e2.id );
    printf( "Enter salary of an employee=\n" );
    scanf( "%ld" , &e2.salary );
    fflush( stdin );
    printf( "Enter gender of an employee=\n" );
    scanf( "%c" , &e2.gen );
    printf( "Enter age of an employee=\n" );
    scanf( "%d" , &e2.age );



    //display details of an employee
    printf( "first employee=\n" );

    printf( "name :%s\n" , e1.name );
    printf( "id:%d\n" , e1.id );
    printf( "age is:%d\n" , e1.age );
    printf( "gender is:%c\n" , e1.gen );
    printf( "salary is %ld\n" , e1.salary );
    printf( "\nsecond employee=\n" );
    printf( "name :%s\n" , e2.name );
    printf( "id:%d\n" , e2.id );
    printf( "age is:%d\n" , e2.age );
    printf( "gender is:%c\n" , e2.gen );
    printf( "salary is %ld\n" , e2.salary );

    return 0;
}