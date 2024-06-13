/*write program to display results of student
 student have:-
 pass subjects                      result
 5                                  pass
 3-4                                 ATKT
 1-2                                 FAIL*/

#include<stdio.h>
int main( ) {
    int phy , che , math , hindi , marathi;
    int count = 0;
    printf( "enter four subject marks=\n" );
    scanf( "%d%d%d%d%d" , &phy , &che , &hindi , &math , &marathi );
    if ( math >= 40 )
    {
        count++;
    }
    if ( phy >= 40 )
    {
        count++;
    }
    if ( che >= 40 )
    {
        count++;
    }
    if ( hindi >= 40 )
    {
        count++;
    }
    if ( marathi >= 40 )
    {
        count++;
    }
    if ( count == 5 )
    {
        printf( "student is pass\n All clear\n" );
    }
    else if ( count == 3 || count == 4 )
    {
        printf( "student is pass only %d subjects\nstudent has ATKT\n" , count );


    }
    else
    {
        printf( "student is fail\n batter luck next time\n" );
    }




    return 0;
}