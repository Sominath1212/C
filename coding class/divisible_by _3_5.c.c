#include<stdio.h>
int main(){
    int i;

    
    for ( i = 0; i <=100; i++)
    {
    if (i%2==0)
    {
        printf("%d is divisble for 2",i);
    }
    else if (i%3==0)
    {
        printf("%d is a divisible for 3",i);

    }
    else if (i%5==0)
    {
        printf("%d is divisible for 5",i);
        
    }
    
    
    }
    
return 0;
}