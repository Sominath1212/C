/* accept three side of trangle and check trangle is euilateral or not*/
#include<stdio.h>
int main( ) {
    int s2 , s1 , s3;
    printf( "Enter first side of trangle=\n" );
    scanf( "%d" , &s1 );
    printf( "Enter second side of trangle =\n" );
    scanf( "%d" , &s2 );
    printf( "enter thard side of trangle=\n" );
    scanf( "%d" , &s3 );
    if ( s1 == s2 && s2 == s3 && s3 == s1 )
    {
        printf( "trangle is euiliteral\n" );
    }
    else
    {
        printf( "trangke is not euiliteral\n" );

    }

    return 0;
}
//USEING FLAG LOGIC
// #include<stdio.h>
// int main( ) {
//     int s2 , s1 , s3;
//     int flag = 0;
//     printf( "Enter first side of trangle=\n" );
//     scanf( "%d" , &s1 );
//     printf( "Enter second side of trangle =\n" );
//     scanf( "%d" , &s2 );
//     printf( "enter thard side of trangle=\n" );
//     scanf( "%d" , &s3 );
//     if ( s1 == s2 )
//     {
//         if ( s2 == s3 )
//         {
//             printf( "trangle is euiliteral\n" );
//             flag = 2;
//         }

//     }
//     if ( flag == 0 )
//     {
//         printf( "trangle is not euiliteral \n" );
//     }

//     return 0;
// }