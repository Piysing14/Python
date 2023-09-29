#include<stdio.h>

void main()

{
    int a,b,temp;
    int *pa=&a;
    int *pb=&b;
    printf("Enter the value of a and b\n\n");
    scanf("%d %d",&a,&b);
    printf("The value of a=%d and b=%d\n\n",a,b);

    temp=*pa;
    a=*pb;
    b=temp;

    printf("The values after swapping is a=%d and b=%d\n",a,b);

}