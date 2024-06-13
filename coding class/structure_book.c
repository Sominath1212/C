#include<stdio.h>
#include<conio.h>
struct book
{
    int pages;
    char name [ 20 ];
    float price;

};
int main( )
{
    struct book b1 , b2 , b3;

//input information 
    printf( "\n*********FIRST BOOK DETAILS**********\n" );
    printf( "Enter first book name=\n" );
    gets( b1.name );
    printf( "Enter price of first book=\n" );
    scanf( "%f" , &b1.price );
    printf( "Enter pages of first book=\n " );
    scanf( "%d" , &b1.pages );
    fflush( stdin );
    printf( "\n*********SECOND BOOK DETAILS**********\n" );
    printf( "Enter second book name=\n" );
    gets( b2.name );
    printf( "Enter price of second book=\n" );
    scanf( "%f" , &b2.price );
    printf( "Enter pages of second book=\n " );
    scanf( "%d" , &b2.pages );
    fflush( stdin );
    printf( "\n*********THARD BOOK DETAILS**********\n" );
    printf( "Enter thard book name=\n" );
    gets( b3.name );
    printf( "Enter price of thard book=\n" );
    scanf( "%f" , &b3.price );
    printf( "Enter pages of thard book=\n " );
    scanf( "%d" , &b3.pages );


    printf( "\n******FIRST DETAIL******\n" );
    printf( "name:%s\n" , b1.name );
    printf( "price:%f\n" , b1.price );
    printf( "pages=%d\n" , b1.pages );

    printf( "\n******SECOND DETAIL******\n" );
    printf( "name:%s\n" , b2.name );
    printf( "price:%f\n" , b2.price );
    printf( "pages=%d\n" , b2.pages );

    printf( "\n******THARD DETAIL******\n" );
    printf( "name:%s\n" , b3.name );
    printf( "price:%f\n" , b3.price );
    printf( "pages=%d\n" , b3.pages );






    return 0;
}
