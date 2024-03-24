//function is a block of code used for reusing code and when we need to perform more then 1 task
//1st declare the function without ; and write code to perform
//function is called from main function always and save the clled funct in a var
//print the var
#include <stdio.h>
int rev(int num)
{
    int i,dig,rev=0;
    i=0;
    while(num!=0)
    {
        dig=num%10;
        num=num/10;
        rev=rev*10+dig;
    }
    return rev;
}
int main()
{
    int result=rev(456);
    printf("rev is: %d",result);
    return 0;
}