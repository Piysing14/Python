#include<stdio.h>
int add(int x, int y)  //formal parameters
{
    x=10;
    y=20;
}

int main()   // in call by value both actual & formal parameters are stored in diff locations.
            // so that value of formal parameters are erased after the fun is executed.
            // and the value of actual parameters stays only even after running the function.
            // so any changes made in formal parameters will not get affected into actual parameters.

{
    int x=20,y=10;
    add(x,y);  //actual parameters
    printf("\n %d \t %d \n",x,y);
    return 0;
}