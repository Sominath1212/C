#include<stdio.h>
int main(){
    int hindi,marathi,digital_electronic,c_programming,oprating_system;
    printf("enter hindi subject marks=\n");
    scanf("%d ",&hindi);
    printf("enter marathi subject marks=\n");
    scanf("%d ",&marathi);
    printf("enter DE subject marks=\n");
    scanf("%d ",&digital_electronic);
    printf("enter c subject marks=\n");
    scanf("%d ",&c_programming);
    printf("enter OS subject marks=\n");
    scanf("%d ",&oprating_system);
    int total=hindi+marathi+digital_electronic+c_programming+oprating_system;
    float avg=total/5;
    printf("total marks=%d\n",total);
    printf("total pracentage=%f\n",avg);
    
    if((avg>75)&&(avg<100))
    {
        printf("A\n");
    }
    else if((avg>60)&&(avg<75))
    {
        printf("B\n");
    }
    else if((avg>35)&&(avg<60))
    {
        printf("C\n");
    }
else if(avg<30)
{
    printf("FAIL\n");
}
else if(avg>100)
{
    printf("invalid marks\n");
}
return 0;
}