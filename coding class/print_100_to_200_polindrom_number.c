#include<stdio.h>




int main()
{
int temp=0,a,c,b,i,s;
for(i=100;i<=200;i++)
{

 temp = i;
     a = temp % 10;
    temp = temp / 10;
 b = temp % 10;
    temp = temp / 10;

s=(a*100)+(b*10)+temp;
if(s==i)
{
printf("%d\n",i);
}
}




return 0;
}