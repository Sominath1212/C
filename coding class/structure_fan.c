/*create a structure of fan .declare two objects .
accept details of fan and display with proper massage*/
#include<stdio.h>
#include<conio.h>
struct fan {

    int no_blades;
    char compony [ 50 ];
    char type;
    float price;
    char color [ 10 ];
};
int main( )
{
    struct fan f1 , f2;
    printf( "FIRST FAN DETAILS=\n" );
    fflush( stdin );
    printf( "enter fan compony name=\n" );
    gets( f1.compony );
    printf( "enter no of blades in the fan=\n" );
    scanf( "%d" , &f1.no_blades );
    fflush( stdin );
    printf( "enter type of fan =\n" );
    scanf( "%c" , &f1.type );
    printf( "enter price of fan =\n" );
    scanf( "%f" , &f1.price );
    fflush( stdin );
    printf( "enter fan color=\n" );
    gets( f1.color );

    printf( "SECOND FAN DETAILS=\n" );
    fflush( stdin );
    printf( "enter fan compony name=\n" );
    gets( f2.compony );
    printf( "enter no of blades in the fan=\n" );
    scanf( "%d" , &f2.no_blades );
    fflush( stdin );
    printf( "enter type of fan =\n" );
    scanf( "%c" , &f2.type );
    printf( "enter price of fan =\n" );
    scanf( "%f" , &f2.price );
    fflush( stdin );
    printf( "enter fan color=\n" );
    gets( f2.color );


    printf( "FIRST FAN=\n" );
    printf( "compony is:%s\n" , f1.compony );
    printf( "no_of_blades:%d\n" , f1.no_blades );
    printf( "type of fan =%c\n" , f1.type );
    printf( "price is:%f\n" , f1.price );
    printf( "color is:%s\n" , f1.color );


    printf( "\n\nSECOND FAN=\n" );
    printf( "compony is:%s\n" , f2.compony );
    printf( "no_of_blades:%d\n" , f2.no_blades );
    printf( "type of fan =%c\n" , f2.type );
    printf( "price is:%f\n" , f2.price );
    printf( "color is:%s\n" , f2.color );

}