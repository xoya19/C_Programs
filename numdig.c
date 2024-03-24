#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 0; num != 0; i++) 
    {
        num = num / 10;
    }
    printf("digits=%d \n", i);
    return 0;
}
