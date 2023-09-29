#include<stdio.h>

int fac(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return fac(x-1)*x;
    }
    
}

void main()
{
    int n;
    printf("Enter a digit you want factorial of ");
    scanf("%d",&n);
    //for ( int i = 1; i < n; i++)
    
        printf("factorial of %d is %d",n,fac(n));
    
    
}