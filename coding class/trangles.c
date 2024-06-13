#include<stdio.h>
int main( )
{
    int s1 , s2 , s3;
    printf( "enter three side of trangle:\n" );
    scanf( "%d%d%d" , &s1 , &s2 , &s3 );
    if ( s1 == s2 == s3 )
    {
        printf( "traingle is equventer\n" );
    }
    if ( s1 != s2 && s2 != s3 && s3 != s1 )
    {
        printf( "scaler trangle=\n" );
    }
    if ( s1 == s2 && s3 != s2 && s3 != s1 || s2 == s3 && s1 != s2 && s1 != s3 || s3 == s1 && s2 != s1 && s2 != s3 )
    {

        printf( "thise trngle is isosceles\n" );
    }
    return 0;
}