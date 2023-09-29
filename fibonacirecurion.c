#include <stdio.h>

int fibbonacci(int f) 
{
   if(f== 0){
      return 0;
   } else if(f== 1) {
      return 1;
   } else {
      return (fibbonacci(f-1) + fibbonacci(f-2));
   }
}

int main() 
{
   int i,n;
   printf("Enter a term upto which you want f series ");
   scanf("%d",&n); 
   printf("Fibbonacci of %d: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d ",fibbonacci(i));            
   }
}