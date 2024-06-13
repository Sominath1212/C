#include<stdio.h>
#include<conio.h>
int main( )
{
    long a;
    int age;
    char gen , health_status , live_in;
    //input age
    printf( "enter age of an applicate=\n" );
    scanf( "%d" , &age );
    //input gender 
    fflush( stdin );
    printf( "enter gender of an applicate=\n" );
    scanf( "%c" , &gen );
    // input health status 
    fflush( stdin );
    printf( "enter health status of an applicante=\n" );
    scanf( "%c" , &health_status );
    fflush( stdin );
    printf( "enter were are living an applicate=\n" );
    scanf( "%c" , &live_in );
    if ( ( age >= 25 && age <= 35 ) && ( gen == 'M' || gen == 'm' ) && ( health_status == 'e' || health_status == 'E' ) && ( live_in == 'C' || live_in == 'c' ) )
    {
        printf( "enter policy requred amount=\n" );
        scanf( "%ld" , &a );
        if ( a <= 200000 && a > 0 )
        {
            int mounthly_p = ( a * 1000 ) / 55;
            printf( "mounthlly primium=%d\n" , mounthly_p );
        }// first if child if close
        else if ( a > 200000 )
        {
            printf( "your enter amount is no valid of thise craitarea\n" );
        }// first if child close

    }// first if close
    else if ( ( age >= 25 && age <= 35 ) && ( gen == 'f' || gen == 'F' ) && ( health_status == 'e' || health_status == 'E' ) && ( live_in == 'C' || live_in == 'c' ) )
    {
        printf( "enter policy requred amount=\n" );
        scanf( "%ld" , &a );
        if ( a <= 175000 && a > 0 )
        {
            int mounthly_p = ( a * 1000 ) / 51;
            printf( "mounthlly primium=%d\n" , mounthly_p );
        }// second else if child close
        else
        {
            printf( "your enter amount is no valid of thise craitarea\n" );
        }//second else if child close

    }// second else if colse
    else if ( ( age >= 36 && age <= 40 ) && ( gen == 'M' || gen == 'm' ) && ( health_status == 'e' || health_status == 'E' ) && ( live_in == 'v' || live_in == 'V' ) )
    {
        printf( "enter policy requred amount =\n" );
        scanf( "%ld" , &a );
        if ( a <= 125000 && a > 0 )
        {
            int mounthly_p = ( a * 1000 ) / 47;
            printf( "mounthlly primium=%d\n" , mounthly_p );
        }// thrad else if child close
        else
        {
            printf( "your enter amount is no valid of thise craitarea\n" );
        }//thrad else if child close

    }// close of tharde else if 
    else
    {
        printf( "your no eligible for policy" );
    }// end of last else

    return 0;
}