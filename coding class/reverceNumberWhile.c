#include<stdio.h>
int  main()
{int num,sum=0,r;
    printf("enter number=\n");
    scanf("%d",&num);
    int i=0;
    while (num>=0)
    {
        r=num%10;
        sum=(sum*r)+r;
        num=num/10;
        i++;
    }
    printf(" reverce number=%d\n",sum);
    printf(" orignal number=%d\n",num);
}