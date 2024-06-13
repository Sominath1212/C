#include<stdio.h>
#include<math.h>
void powerofnumber(int s,int m);
void squareroot(int n);
int addition(int a,int b);
int subtracation(int a,int b);
int multiplication (int s,int m);
int division(int s,int m);
void average (int a,int b ,int c,int d,int e);
//void  sumofnumber(int number);
void  factorial(int number);
int main(){
    char ch;
    int number,a,b,c,d,e,n,s,m;
    printf("enter opration for following=\n ");
    
    printf("enter opration=\n");
    scanf("%c",&ch);
    if (ch=='factorial')
    {
        factorial(number);
    }
    // else if(ch=="sumofnumber")
    // {
    //     sumofnumber(number);
    // }
    else if(ch=="average")
    {
        average(a,b,c,d,e);
    }
    else if(ch=="addition")
    {
        printf("enter two number=\n");
        scanf("%d%d",&a,&b);
    int c=addition(a,b);
    printf("total adiition of given number=%d",c);
    }
    else if(ch=="subtracation")
    {
        printf("enter two number=\n");
        scanf("%d%d",&a,&b);
    int c=subtracation(a,b);
    printf("total subtracation of given number=%d",c);
    }
    else if(ch=="multiplication")
    {
        printf("enter two number=\n");
        scanf("%d%d",&a,&b);
    int c=multiplication(a,b);
    printf("total multiplication of given number=%d",c);
    }
    else if(ch=="division")
    {
        printf("enter two number=\n");
        scanf("%d%d",&a,&b);
    int c=division(a,b);
    printf("total division of given number=%d",c);
    }
    else if(ch=="power")
    {
        powerofnumber(a,b);
    }
    else if (ch=="squareroot")
    {
      squareroot(n);  
    }
    return 0;
}
void average(int a,int b,int  c,int d,int e){
   // int a,b,c,d,e;
    printf("enter five number=\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int sum=a+b+c+d+e;
    printf("total sum=%d",sum);
    int avg;
    avg=sum/5;
    printf("total average =%d",avg);
}
// void sum(int number){
//     int i;
//     printf("enter number=\n");
//     scanf("%d",&number);
//     int n;
//     int f;
//     for ( i = 1; i <=n; i++)
//     {
//          f=f+i;
//         printf("sum of given  number=%d",f);
//     }
// }
void factorial(int number){
    int i;
    int n;
    int f;
    printf("enter number=\n");
    scanf("%d",&number);
    
    for ( i = 1; i <=n; i++)
    {
         f=f*i;
        printf("factorial  of given  number=%d",f);
    }
    
}
void powerofnumber(int s,int m)
{
    int p;
    printf("enter two number=\n");
    scanf("%d%d",&s,&m);
    p=pow(s,m);
    printf("power of %d is a %d\n",s,m);
}
void squareroot(int n)
{
int s;
printf("enter two number=\n");
    scanf("%d",&n);
    s=sqrt(n);
    printf("squareroot of is a %d\n",n);
}
int addition(int a,int b)
{
    return a+b;
}
int subtracation(int a,int b)
{
    return a-b;
}
int multiplication (int s,int m)
{
    return s*m;
}
int division(int s,int m)
{
    return s/m;
}