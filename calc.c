#include <stdio.h>
int main()
{
    int add,sub,multi,div;
    int option,n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("choose option:\n1 for add\n2 for sub\n3 for multi\n4 for div\nEnter: ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
            add=n1+n2;
            printf("add = %d\n",add);
            break;
        }
        case 2:
        {
            sub=n1-n2;
            printf("sub = %d\n",sub);
            break;
        }
        case 3:
        {
            multi=n1*n2;
            printf("multi = %d\n",multi);
            break;
        }
        case 4:
        {
            div=n1/n2;
            printf("div = %d\n",div);
            break;
        }
        default:
        {
            printf("Invalid option!");
            break;
        }
    return 0;
    }
}