#include<stdio.h>

int main()

{
        

        int grades[5]={79,79,89,72,80};
        double sum =0.0;
        double *ptrsum=&sum;
        int i;
        printf("My grades are:\n");

        for(i = 0; i < 5; i++)
        {
            printf("%d",grades[i]);
            printf("\n\n");
        }
        
        for(i = 0; i < 5; i++)
        {
            sum+=grades[i];}
            int avg=sum/5;
            printf("My average is %d",avg);
            printf("\n\n");
        

        printf("sum is at adress %p, or %lu and is %lf\n",ptrsum,ptrsum,*ptrsum);  //%p is decimal & %lu is long unsigned
        printf("grades are at adress %lu, tu %lu\n",grades,grades+5);

        return 0;
}