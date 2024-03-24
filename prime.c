#include<stdio.h>
int main()
{
    int i,num;
    int count=0;
    printf("Enter a num: ");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            count=count+1;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime number %d\n",num);
    }
    else
    {
        printf("%d Not prime no.",num);
    }
    return 0;
}