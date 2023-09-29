#include<stdio.h>

void main()

{
   int A[100],i,sum=0,n;
   printf("Enter the number upto which you want sum of odd digits\n");
   scanf("%d",&n);

   printf("Enter the terms upto %d\n",n);

   for ( i = 1; i <= n; i++)
   {
      scanf("%d",&A[i]);
      if (A[i]%2==1)
      {
         sum+=A[i];
      }
      
   }

   printf("The sum of odd terms upto %d is %d",n,sum);
   
}