#include<stdio.h>
#include<conio.h>
int main( ) {
    int book_no;
    char title [ 30 ];
    char author_name [ 45 ];
    char publication_n [ 150 ];
    printf( "enter book number =\n" );
    scanf( "%d" , &book_no );
    fflush( stdin );
    printf( "enter book title=\n" );
    scanf( "%s" , &title );
    fflush( stdin );
    printf( "enter book author name=\n" );
    scanf( "%s" , &author_name );
    fflush( stdin );
    printf( "enter book publication name=\n" );
    scanf( "%s" , &publication_n );

    printf( " book number=%d\n" , book_no );
    printf( " book title is =%s\n" , title );
    printf( " book authoer name is =%s\n" , author_name );
    printf( " book publication name is=%s\n" , publication_n );

    return 0;
}