//calculate permution& combination
#include<stdio.h>
int main()
{
    int n,r;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter r:\n");
    scanf("%d",&r);
    /*ncr=n!/(n-r)r!
    npr=n!/(n-r)!*/
    //permutation
    
    //calculate factorial for n
    int factN;
    for (int  i = 1; i < n; i++)
    {
         factN=factN*i;
        

    }
    //calculate factorial for n-r
    int Nmr;
    // int m;
    // m=n-r;
    for (int  i = 1; i <=(n-r); i++)
    {
        Nmr=Nmr*i;

    }
     int npr;
     npr=factN/Nmr;
     printf("permutation=%d",npr);

    
    




}