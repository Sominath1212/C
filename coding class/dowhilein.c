#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("enter number=");
    scanf("%d",&n);
     i=n;
    do
    {
        f=f*i;
        i--;
    }while(i>=1);
    printf("%d",f);
return 0;
}