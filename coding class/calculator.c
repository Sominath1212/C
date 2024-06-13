#include<stdio.h>
int main(){
    char opration;
    int a,b,c;
    printf("enter your opration=");
    scanf("%c",&opration);
    switch(opration)
    {
case '+': printf("enter first number=");
          scanf("%d",&a);
          printf("enter second number=");
          scanf("%d",&b);
          c=a+b;
          printf("total sum=%d",c);
          break;
case '-': printf("enter first number=");
          scanf("%d",&a);
          printf("enter second number=");
          scanf("%d",&b);
          c=a-b;
          printf("total subtract=%d",c);
          break;
case '*': printf("enter first number=");
          scanf("%d",&a);
          printf("enter second number=");
          scanf("%d",&b);
          c=a*b;
          printf("total multiplication=%d",c);
          break;
case '/': printf("enter first number=");
          scanf("%d",&a);
          printf("enter second number=");
          scanf("%d",&b);
          c=a/b;
          printf("total division=%d",c);
          break;
case '%': printf("enter first number=");
          scanf("%d",&a);
          printf("enter second number=");
          scanf("%d",&b);
          c=a%b;
          printf("total md=%d",c);
          break;
default: printf("your entered incorrect opration");
    }
return 0;
}