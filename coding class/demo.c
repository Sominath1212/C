#include<stdio.h>
int  main()
{

int sum=0,arraysum=0;
int n;
printf("Enter size of array=\n");
scanf("%d",&n);
int a[n],i;
printf("Enter array element=\n");
for (int i = 0; i <n; i++)
{
scanf("%d",&a[i]);
}
for (int i = 0; i <=n; i++)
{
sum=sum+i;
}


for (int i = 0; i <n; i++)
{
    arraysum = arraysum + a[i];
}




int total =sum-arraysum;
printf(" miassing element are %d",total);

return 0;
}