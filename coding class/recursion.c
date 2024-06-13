#include <stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        int result = (number + factorial(number - 1));
        return result;
    }
}
int main()
{
    int number;

    printf("Enter number for calculate factorial:\n");
    scanf("%d", &number);
    printf("%d is factorial of the %d", factorial(number), number);

    return 0;
}