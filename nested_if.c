#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    if (a!=b)
        {
            printf("First number is not equal to second number\n");
    if (a<b)
        {
            printf("First number is smaller than second number\n");
        }
    else
        {
            printf("First number is greater than second number\n");
        }
        }
    else
    {
        printf("1st and 2nd number is equal\n");
    }
    return 0;
}
