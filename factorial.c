#include <stdio.h>
int main()
{
    int num,i,factorial=1;
    printf("Enter the: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        factorial=i*factorial;
    }
    printf("Factorial of %d is: %d",num,factorial);
return 0;
}