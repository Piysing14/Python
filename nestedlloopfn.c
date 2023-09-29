#include<stdio.h>
double sq(double);
double cu(double);

void main()
{
    int n,i,j;
    printf("how maany numbers square and cube form 1 to n : where n is :");
    scanf("%d",&n);
    printf("The cube and sqare from 1 to %d are as follows with increment of 0.1\n",n);

    for ( i = 1; i < n; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%lf %lf %lf",(i+j/10.0),sq(i+j/10.0),cu(i+j/10.0));
            printf("\n \n");
        }
        
    }
    

}

double sq(double x)
{
    return(x*x);
}

double cu(double x)
{
    return(x*x*x);
}