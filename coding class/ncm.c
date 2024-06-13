/*calculate error in numberic computation*/
#include <stdio.h>
#include <math.h>
int main( )
{
    double error , true_value , approx_value , absulate_error , relative_error , relative_percentage;
    printf( "\nenter true value=\n" );
    scanf( "%lf" , &true_value );
    printf( "\nenter approx value=\n" );
    scanf( "%lf" , &approx_value );
    // calculate first error
    error = true_value - approx_value;
    printf( "\nerror=%lf\n" , error );
    // calculate absulate error

    absulate_error = fabs( error );
    printf( "\nabsulate error=%lf\n" , absulate_error );
    // calculate relative error
    relative_error = fabs( error / true_value );
    printf( "\nrelative error=%lf\n" , relative_error );
    // calculate relative percentage
    relative_percentage = relative_error * 100;
    printf( "\nrelative percentage=%lf\n" , relative_percentage );
    return 0;
}