
/*matrix multiplication*/
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], sum[2][2], i, j;
    printf("enter first matrix elelment =");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d\n", &a[i][j]);
        }
    }
    printf(" print first matrix element=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix elelment =\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d\n", &b[i][j]);
        }
    }
    printf("second matrix element=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // sum of the given matrix
    printf("sum of the given matrix=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] * b[i][j];
        }
    }
    // print total matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
