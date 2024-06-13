#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter five number=\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    printf("%d is largest number",a);
                }
               else
               {
                printf("%d is largest number",e);
               } 
            }
            
        }
        
    }
    else if (b>a)
    {
        if (b>c)
        {
            if (b>d)
            {
            if (b>e)
            {
                printf("%d is largest number",b);
            }
            else{
                printf("%d is largest number",e);
            }
            
            }
            
        }
        
    }
    else if (c>a)
    {
        if (c>b)
        {
            if (c>d)
            {
                if (c>e)
                {
                printf("%d is largest number ",c);
                }
                else 
                {
                    printf("%d islargest number",e);
                }
                
            }
            
        }
        
    }
    else if (d>a)
    {
        if (d>b)
        {
            if (d>c)
            {
                if (d>e)
                {
                    printf("%d is largest number",d);
                }
                else
                {
                    printf("%d is largest number ",e);
                }
                
            }
            
        }
        
    }
    else
    {
        printf("sorry");
    }
    
    
return 0;
}