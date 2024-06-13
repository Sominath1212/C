#include<stdio.h>
int main(){
    int i,j,a[2][2],b[2][2],sum[2][2];
//first matrix element
printf("enter first matrix elemants=");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
//second matrix elemant
printf("enter second marix elements=");
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
}
// sum of total matrix element
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
    
}
//print total sum matrix
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("%d",sum[i][j]);
    }
    
}

return 0;
}