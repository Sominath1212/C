#include<stdio.h>
int sumofNumber(int number)
{
if (number==0)
{
    return 0;
}
else 
{
    int result=(number+sumofNumber(number-1));
    return result;

}
}
int main()
{
int number;
printf("Enter number calculate number sum=\n");
scanf("%d",&number);
printf("%d is total sum of %d",sumofNumber(number),number);
    return 0;
}