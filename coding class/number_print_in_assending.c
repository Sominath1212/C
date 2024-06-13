#include<stdio.h>
int main()
{
int i;
int n,m;
printf("using while loop\n");
printf("enter  n=");
scanf("%d",&n);
printf("enter m=");
scanf("%d",&m);
if(m<n)
{
i=m;
while(i<=n)
{
printf("%d\n",i);
i++;
}
}
else if(!(m<n))
{
i=n;
while(i<=m)
{
printf("%d\n",i);
i++;
}



}
return 0;
}