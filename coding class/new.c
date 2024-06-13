/*with return value without argument*/
#include<stdio.h>
int addition();
int multiplication();
int subtracation();
int division();
int modulo();
int main(){
    char o;
    if (o=='+')
    {
        
        printf("total addition=%d",addition());
    }
    
    
return 0;
}
int addtion()
{
    int a,b,c;
    printf("enter number for two=\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int subtracation()
{
    int a,b,c;
    printf("enter number=\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    return c;

}
int multiplication()
{
    int a,b,c;
    printf("enter number for two=\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    return c;
}
int division()
{
    int a,b,c;
    printf("enter number for two=\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    return c;
}
int modulo()
{
    int a,b,c;
    printf("enter number for two=\n");
    scanf("%d%d",&a,&b);
    c=a%b;
    return c;
}