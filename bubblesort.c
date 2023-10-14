#include<stdio.h>

void printarr(int* A, int n)
 {   
    for (int i = 0; i < n; i++)
 {
    printf("%d ",A[i]);
 }   printf("\n");

 }

void bubblesort(int* A,int n)
{       int temp,ifsorted=0;
        for (int i = 0; i < n-1; i++)   //loop for pass
        {   printf("Working on pass number %d\n",i+1);
            for (int j = 0; j < n-1-i; j++) //loop for comparison
            {   ifsorted=1;
                if (A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;      
                    ifsorted=0;          
                }
                
            }if (ifsorted)
            {
                return;
            }
            
            
        }
        
}

int main()
{
    int A[]={1,24,56,3,78};
    int n=5;
    printarr(A,n);
    bubblesort(A,n);
    printarr(A,n);
    return 0;
}