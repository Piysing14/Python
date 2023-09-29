#include<stdio.h>
#include<math.h>

void main()

{
    double i;
    for ( i = 0; i <=1.0;i+=0.1 )
    {
        double sine = sin(i);
        double cosine = cos(i);
        
        printf("sin(%f)=%f cos(%f)=%f",i,sine,i,cosine);
        printf("\n");
        
    }
    
}