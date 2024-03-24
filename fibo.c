#include <stdio.h>
int main()
{
    int temp,i,n;
    int a=0,b=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    temp=a+b;
    printf("%d ",a);
    a=b;
    b=temp;
    }
    return 0;
}