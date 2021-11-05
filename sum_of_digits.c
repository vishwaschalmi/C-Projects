#include<stdio.h>

//Function declaration
int Whilefunc(int n, int r);

int main()
{
    int n,sum=0,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum = Whilefunc(n, r);
    printf("Sum is = %d\n",sum);
    return 0;
}

//Function Defintion
int Whilefunc(int n, int r)
{
    int sum = 0u;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }

    return sum;
}