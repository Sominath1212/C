/*write a program to a cashier has corrency note of 100,50,10 write a program accept amount from the user and
print how many notes of each denomation the casher should give prority 100,50,10*/
#include<stdio.h>
int main( )
{
    long am;
    int hn , tn , fn;

    printf( "enter amount=\n" );
    scanf( "%ld" , &am );
    hn = ( am / 100 ) % 1000;
    fn = ( hn / 50 ) % 10;
    tn = ( am / 10 ) % 10;
    printf( "total 100's notes=%d\n" , hn );
    printf( "total 50 notes=%d\n" , fn );
    printf( "total 10's notes=%d\n " , tn );
    return 0;




}