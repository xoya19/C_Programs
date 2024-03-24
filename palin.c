#include <stdio.h>
int main()
{
    int num,i,dig,rev;
    printf("Enter the number: ");
    scanf("%d", &num);
    int ognum=num;
    for (i = 0; num != 0; i++) 
    {
        dig=num%10;
        num = num / 10;
        rev=rev*10+dig;
    }
    if(ognum==rev)
    {
        printf("The number %d is palindrome.",ognum);
    }
    else
    {
        printf("The number %d is not palindrome: as its reverse is %d",ognum,rev);
    }
    return 0;
}
