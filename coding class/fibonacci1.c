#include <stdio.h>
int main()
{

    int number;
    int f = 0;
    int num1 = 0;
    int num2 = 1;
    printf("Enter number=");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("%d\t", f);
        f = num1 + num2;
        num1 = num2;
        num2 = f;
    }

    return 0;
}