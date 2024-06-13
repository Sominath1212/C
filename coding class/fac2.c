#include<stdio.h>
int main(){
    int f=1,i,n;
    printf("enter number=");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    printf("%d",f);
return 0;
}