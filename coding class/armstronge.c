#include <stdio.h>

void push(int e)
{
}
void pop()
{
}
void display()
{
}
int main()
{

    int a[10];
    int stop = 5;
    int ptop = 4;
    int choice;
    do
    {
        printf("1.push");
        printf("2.pop");
        printf("3.diplay");
        printf("4.exit");
        printf("Enter you choice :");
        scanf("%d", &choice);
        int ele;
        switch (choice)
        {
        case 1:
            printf("Enter element to push:");
            scanf("%d", &ele);
            if (ptop == 9)
            {
                printf("Primary stack is under flow");
            }
            else
            {
                a[ptop + 1] = ele;
                ptop++;
                printf("Element is pushed into primary stack");
            }
            break;
        case 2:
            int choice2;
            printf("1.pop from primary stack ");
            printf("2.pop from secondary stack ");
            printf("Enter your choice=");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                /*pop from primary stack*/
                if (ptop == 4)
                {
                    printf("Primary stack is under flow condtion");
                }
                else
                {
                    a[stop - 1] = a[ptop];
                    stop--;
                    ptop--;
                    printf("element is successfully popped");
                }

                break;

            case 2: // pop from secondary stack

            printf("1.restored");
            printf("2.discard");
            printf("Enter your choice =");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
            if(stop==)
                
                break;
            
            default:printf("Invalid choice");
                break;
            }           
                break;
            default:
                printf("Invalid choice");

                break;
            }

            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (1);

    return 0;
}
