#include<stdio.h>
int main(){
    char city;
    printf("enter citys first charecter=");
    scanf("%c",&city);
    switch (city)
    {
    case 'J': printf("JALNA");
        break;
    case 'N': printf("NAGPUR");
    break;
    case 'A': printf("AURANGABAD");
    break;
    case 'B': printf("BOMBAY");
    break;
    case 'K': printf("KOLKATTA");
    break;
    case 'C': printf("CHANDRAPUR");
    break;
    case 'D': printf("DILHI");
    break;
     default: printf("sorry you have enter invalied city");
        break;
    }
    
return 0;
}