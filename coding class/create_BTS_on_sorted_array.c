#include <stdio.h>
int main()
{

    int a[3][3], b[3][3], i, j, count = 0;
    // intput
    printf("Enter fisrt array elements=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second array elements=\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] == b[i][j])
            {
                count++;
            }
        }
    }

    // as it's print

    printf("first array\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("second array\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (count == 9)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}