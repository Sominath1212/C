#include<stdio.h>
#include<math.h>
void power(int a,int b);
void squareroot(int a);
int a,b;
int main()
{
  // power(a,b);
    
    squareroot( a);

    
}
void power(int a,int b)
{
    int p,n;
    printf("enter two number=\n");
    scanf("%d%d",&a,&b);
    p=pow(a,b);
    printf("%d is power%d",a,p);
}
void squareroot(int a)
{
    
    
    printf("enter number=\n");
    scanf("%d",&a);
    int s;
    s=sqrt(a);
    printf("%d is squareroot",s);
}