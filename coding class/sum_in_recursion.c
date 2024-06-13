#include<stdio.h>
int add(int n);
int main(){
    int n;
    printf("enter number=\n");
    scanf("%d",&n);
    int c=add(n);
    printf("%d",c);
return 0;
}
int add(int n)
{
    if (n==0)
    {
        return 0;
    }
    int n2=add(n-1);
    
    return n2+n;
}