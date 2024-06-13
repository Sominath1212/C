// perform swapping of two number using thard variable 

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("enter a number=\n");
    scanf("%d%d", &a, &b);

    c = a;
    a = b;
    b = c;
    printf("swap number of a=%db=%d", a, b);

    return 0;
}