#include <stdio.h>
#include <math.h>

int main(void)
{
    double n;
    int i;
    
    for (i = 0; i < 30; i++)
    {
        n = i / 10.0;
        double result = sin(n);   //to store value of sin(0-29)
        double mod = abs(result); // to make the negative valuse positive
        printf("sin( %lf ) = %lf \n", n, mod);
    }

    /*#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() 
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf(“sin( %lf ) = %lf \n”, interval, fabs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}*/

    printf("\n+++++++\n");
    return 0;
}

/**/