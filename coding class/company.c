#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main( ) {
    ;

    int age;
    char gen;
    int eyear;
    int i = 0;
    do
    {

        printf( "enter age of an employee=\n" );
        scanf( "%d" , &age );
        fflush( stdin );
        printf( "enter gender of an employee=\n" );
        scanf( "%c" , &gen );
        printf( "enter exprince in year=\n" );
        scanf( "%d" , &eyear );
        if ( ( age >= 21 && age <= 28 ) && ( gen == 'm' || gen == 'M' ) && ( eyear >= 0 && eyear <= 5 ) )
        {
            printf( "employee is eligible for 30000 salary\n" );

        }
        else if ( ( age >= 21 && age <= 28 ) && ( gen == 'f' || gen == 'F' ) && ( eyear >= 0 && eyear <= 5 ) )
        {
            printf( "emlpoyee is eligible for 35000 salary\n" );
            printf( "becouse employee is female\n" );
        }
        else if ( ( age >= 29 && age <= 35 ) && ( gen == 'm' || gen == 'M' ) && ( eyear >= 6 && eyear <= 12 ) )
        {
            printf( "employee is eligible for 45000 salary\n" );
            printf( "becouse thise employee has greater than 5 year exprince\n" );
        }
        else if ( ( age >= 29 && age <= 35 ) && ( gen == 'f' || gen == 'F' ) && ( eyear >= 6 && eyear <= 12 ) )
        {
            printf( "employee is eligible for 45000 salary\n" );
            printf( "becouse thise employee has less than 5 year exprince\n" );
        }
        else if ( ( age >= 36 && age <= 42 ) && ( gen == 'm' || gen == 'M' || gen == 'f' || gen == 'F' ) && ( eyear >= 13 && eyear <= 18 ) )
        {
            printf( "employee is eligible for 70000 salary \n" );
            printf( "becouse thise employee has greater than 12 year exprince\n" );
        }
        else if ( ( age > 42 ) && ( gen == 'm' || gen == 'M' || gen == 'f' || gen == 'F' ) && ( eyear > 18 ) )
        {
            printf( "employee is eligible for 70000 salary \n" );
            printf( "becouse thise employee has greater than 12 year exprince\n" );
        }
        else
        {
            printf( "your not eligible of above group\n" );
        }

          // repatetive do while loop
        char choice;
        fflush( stdin );
        printf( "you want to performed again opration(yes for:y/Y)(no for:n/N)=\n" );
        scanf( "%c" , &choice );
        if ( choice == 'Y' || choice == 'y' )
        {
            i++;
        }
        else
        {
            exit( 0 );
        }


    }
    while ( 1 );







    return 0;
}