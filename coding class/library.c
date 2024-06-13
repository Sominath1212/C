/*write program to calculate labriry fine .
but first 8 day only charge Rs.1 per day,first 9 to 14 day charge Rs.2 per day
first 15-22 day charge Rs.3 per day first 23-30 day charge Rs.5 per day,days a
above 30 then cancel membership of member*/
#include<stdio.h>
int main( ) {
    int day;
    int fine;
    printf( "enter late day for  return book=\n " );
    scanf( "%d" , &day );
    if ( day >= 1 && day <= 8 )
    {
        fine = day * 1;
        printf( "Rs:%d\n" , fine );
    }
    else if ( day >= 9 && day <= 14 )
    {
        day = day - 8;
        fine = day * 2 + 8;
        printf( "Rs:%d\n" , fine );
    }
    else if ( day >= 15 && day <= 22 )
    {
        day = day - 8;
        day = day - 6;
        fine = day * 3 + 12 + 8;
        printf( "Rs:%d" , fine );
    }
    else if ( day >= 23 && day <= 30 )
    {
        day = day - 8;
        day = day - 6;
        day = day - 8;
        fine = day * 5 + 12 + 24 + 8;
        printf( "Rs:%d" , fine );
    }
    else if ( day > 30 )
    {
        printf( "your membership  is cancle\n" );
    }







    return 0;
}