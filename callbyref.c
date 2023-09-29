//here both actual & formal para refers to same memory location
//so any changes made in the formal will reflect into actual para.
#include<stdio.h>

int fun(int *x,int *y)
{
    *x=50;
    *y=100;
}

void main()
{
    int x=5,y=10;
    fun(&x,&y);
    printf("%d \t %d",x,y);
}