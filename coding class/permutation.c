/*calculate parmitetiopn */
#include <stdio.h>
int permutation(int n, int r);
int main()
{
    int n, r;
    printf("enter n=\n");
    scanf("%d", &n);
    printf("enter r=\n");
    scanf("%d", &r);
    int c = permutation(n, r);
    printf("total permutation=%d", c);
    return 0;
}
int permutation(int n, int r)
{
    // n factorial
    int nfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    // n-r factorial
    int nrfact = 1;
    for (int i = 1; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }
    // calculate actual logic
    int npr = nfact / nrfact;
    return npr;
}