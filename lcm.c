#include <stdio.h>
int main()
{
    int lcm,n1,n2,i,fact=1;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        lcm=n1;
    }
    else
    {
        lcm=n2;
    }
    while(fact)
    {
        if(lcm%n1 ==0 && lcm%n2==0)
        {
            printf("lcm = %d",lcm);
            break;
        }
        lcm++;
    }
return 0;
}