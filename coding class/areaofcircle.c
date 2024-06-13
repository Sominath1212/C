/*write a program to calculate total area odf circle and total circumference*/
#include<stdio.h>
int main( ) {
    float r , area;
    printf( "enter radius for circle=\n" );
    scanf( "%f" , &r );
    //calculate area of circle 
    area = r * r * 3.14;
    printf( "area of circle is %f\n" , area );
    float cc;
    // calculate circumeference 
    cc = 2 * 3.14 * r;
    printf( "cc is %f" , cc );
    return 0;
}