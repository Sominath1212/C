/*write a program  accept basic salary from the user and calculate
 gross saalry by add 8% TA,11% DA,14%HRA*/
#include<stdio.h>
int main( )
{
    long bsalary , da , ta , hra , gsalary;
    printf( "enter basic salary of an employee=\n" );
    scanf( "%ld" , &bsalary );
    ta = ( bsalary / 100 ) * 8;
    printf( "total TA =%ld\n" , ta );
    da = ( bsalary / 100 ) * 11;
    printf( "total da=%ld\n" , da );
    hra = ( bsalary / 100 ) * 14;
    printf( "total hra=%ld\n" , hra );
    gsalary = bsalary + da + ta + hra;
    printf( "total gross salary=%ld\n" , gsalary );
    return 0;

}