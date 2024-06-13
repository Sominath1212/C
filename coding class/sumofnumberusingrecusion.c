#include <stdio.h>
int sumofnumber(long int a);
int main()
{
    long int a;
    printf("enter number=\n");
    scanf("%ld", &a);
    long int c = sumofnumber(a);
    printf("total sum of given number=%ld", c);

    return 0;
}
int sumofnumber(long int a)
{
    if (a == 0)
    {
        return (0);
    }
    else
    {
        return sumofnumber(a - 1) + a;
    }
}