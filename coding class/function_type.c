// #include<stdio.h>
// int addition(int a,int b);
// int subtracation(int a,int b);
// int multiplication(int a,int b);
// int division(int a,int b);
// int modulo(int a,int b);
// int main(){
//     char ch;
//     printf("enter opration=\n");
//     scanf("%c",&ch);
//     if (ch=='+')
//     {
//         int a,b,c;
//         printf("enter two number=\n");
//         scanf("%d%d",&a,&b);
//         c=addition(a,b);
//         printf("total addition=%d",c);
//     }
//     else if (ch=='-')
//     {
//         int a,b,c;
//         printf("enter two number=\n");
//         scanf("%d%d",&a,&b);
//         c=subtracation(a,b);
//         printf("total subtracation=%d",c);
//     }
//     else if (ch=='*')
//     {
//         int a,b,c;
//         printf("enter two number=\n");
//         scanf("%d%d",&a,&b);
//         c=multiplication(a,b);
//         printf("total addition=%d",c);
//     }
//     else if (ch=='/')
//     {
//         int a,b,c;
//         printf("enter two number=\n");
//         scanf("%d%d",&a,&b);
//         c=division(a,b);
//         printf("total addition=%d",c);
//     }
//     else if (ch=='%')
//     {
//         int a,b,c;
//         printf("enter two number=\n");
//         scanf("%d%d",&a,&b);
//         c=modulo(a,b);
//         printf("total addition=%d",c);
//     }

// return 0;
// }
// int addition(int a,int b)
// {
//     return a+b;
// }
// int subtracation(int a,int b)
// {
//     return a-b;
// }
// int multiplication(int a,int b)
// {
//     return a*b;
// }
// int division(int a,int b)
// {
//     return a/b;
// }
// int modulo(int a,int b)
// {
//     return a%b;
// }
// #include<stdio.h>
// void addition();
// void subtracation();
// void multiplication();
// void division();
// void modulo();

// int main(){
//     char ch;
//     printf("enter opration=\n");
//     scanf("%c",&ch);
//     if (ch=='+')
//     {
//         addition();
//     }
//     else if (ch=='-')
//     {
//         subtracation();
//     }
//     else if (ch=='*')
//     {
//         multiplication();
//     }
//     else if (ch=='/')
//     {
//         division();
//     }
//     else if (ch=='%')
//     {
//         modulo();
//     }

// return 0;
// }
// void addition(){
//     int a,b,c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("total addition=%d",c);
// }
// void subtracation(){
//     int a,b,c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a-b;
//     printf("total subtracation=%d",c);
// }
// void multiplication(){
//     int a,b,c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a*b;
//     printf("total multiplication=%d",c);
// }
// void division(){
//     int a,b,c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a/b;
//     printf("total division=%d",c);
// }
// void modulo(){
//     int a,b,c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a%b;
//     printf("total modulo=%d",c);
// }
// #include <stdio.h>
// void addition(int a,int b);
// void subtracation(int a,int b);
// void multiplication(int a,int b);
// void division(int  a,int b);
// void modulo(int a,int b);
// int main()
// {
//     char ch;
//     int a,b;
//     printf("enter opration=\n");
//     scanf("%c",&ch);
//     if (ch=='+')
//     {
//         addition(a,b);
//     }
//     else if (ch=='-')
//     {
//         subtracation(a,b);
//     }
//     else if (ch=='*')
//     {
//         multiplication(a,b);
//     }
//     else if (ch=='/')
//     {
//         division(a,b);
//     }
//     else if (ch=='%')
//     {
//         modulo(a,b);
//     }

//     return 0;
// }
// void addition(int a,int b){
//     int c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("total addition=%d",c);
// }
// void subtracation(int a,int b){
//     int c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a-b;
//     printf("total subtracation=%d",c);
// }
// void multiplication(int a,int b){
//     int c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a*b;
//     printf("total multiplication=%d",c);
// }
// void division(int a,int b){
//     int c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a/b;
//     printf("total division=%d",c);
// }
// void modulo(int a,int b){
//     int c;
//     printf("enter two number=\n");
//     scanf("%d%d",&a,&b);
//     c=a%b;
//     printf("total modulo=%d",c);
// }
#include <stdio.h>
int addition();
int subtracation();
int multiplication();
int division();
int modulo();

int main()
{
    char ch;
    printf("enter opration=\n");
    scanf("%c", &ch);
    if (ch == '+')
    {
        int a, b, c;
        printf("enter two number=\n");
        scanf("%d%d", &a, &b);
        c = addition();
        printf("total addition=%d", c);
    }
    else if (ch == '-')
    {
        int a, b, c;
        printf("enter two number=\n");
        scanf("%d%d", &a, &b);
        c = subtracation();
        printf("total subtracation=%d", c);
    }

    else if (ch == '*')
    {
        int a, b, c;
        printf("enter two number=\n");
        scanf("%d%d", &a, &b);
        c = multiplication();
        printf("total multiplication=%d", c);
    }

    else if (ch == '/')
    {
        int a, b, c;
        printf("enter two number=\n");
        scanf("%d%d", &a, &b);
        c = division();
        printf("total division=%d", c);
    }

    else if (ch == '%')
    {
        int a, b, c;
        printf("enter two number=\n");
        scanf("%d%d", &a, &b);
        c = modulo();
        printf("total modulo=%d", c);
    }

    return 0;
}
int addition()
{
    int a, b;
    return a + b;
}

int subtracation()
{
    int a, b;
    return a - b;
}
int multiplication()
{
    int a, b;
    return a * b;
}
int division()
{
    int a, b;
    return a / b;
}
int modulo()
{
    int a, b;
    return a % b;
}
