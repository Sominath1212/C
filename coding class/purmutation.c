#include<stdio.h>
int main(){
    int n,r;
    printf("enter number(n):\n");
    scanf("%d",&n);
    printf("enter number(r):\n");
    scanf("%d",&r);
    // nfact
    int nfact=1;
    for (int  i = 1; i <= n; i++)
    {
        nfact=nfact*i;
    }
    //nrfact
    
    int nrfact=1;
    for (int  i = 1; i <=n-r; i++)
    {
        nrfact=nrfact*i;
    }
    int npr;
    npr=nfact/nrfact;
    printf("total purmutation=%d",npr);
    
    
return 0;
}