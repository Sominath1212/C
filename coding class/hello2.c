#include<stdio.h>
int main(){

    int f=1,i,n;
    printf("enter number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
{
    f=f*i;

}
printf("%d",f);
return 0;
}