#include<stdio.h>
int main(){
    int f=1,i=1,n;
    printf("enter number=");
    scanf("%d",&n);
    do{
        f=f*i;
        // printf("factorial=%d",f);
        i++;
    }while(i<=n);
     printf("factorial=%d",f);
return 0;
}