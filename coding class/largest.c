#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number=");
    scanf("%d",&c);
    printf("enter thard number=");
    scanf("%d",&b);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest number",a);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is largest number",b);
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            printf("%d is largest number",c);
        }
    }
     else {
         printf("sorry");
     }
return 0;
}