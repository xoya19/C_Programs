#include <stdio.h>
int main()
{
    int base,powerr;
    long long result = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &powerr);
    if (powerr < 0)
    {
        printf("Negative exponent is not supported in this example.\n");
    } 
    else 
    {
        for (int i = 0; i < powerr; i++)
        {
            result *= base;
        }
        printf("%d^%d = %lld\n", base, powerr, result);
    }
    return 0;
}

