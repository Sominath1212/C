/*matrix addition*/
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],sum[3][3],i,j;
    //first matrix
    printf("enter first matrix element (any 9)=\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);

        }
        
    }
    //print elements in matrix form
    printf("print element=");

    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    //first matrix
    printf("enter second matrix element (any 9)=\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);

        }
        
    }
    //print elements in matrix form
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
    //sum matrix
    printf("sum matrix=\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
          sum[i][j]=a[i][j]+b[i][j];

        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j < 3; j++)
        {
          printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    
    
    
return 0;
}
