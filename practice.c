#include<stdio.h>

int per(int l,int b)
{
    int p=(2)*(l+b);
    return p;

}

void main(void)
{
    int x,y,z;
    printf("enter length and breadth of rectangle\t");
    scanf("%d %d",&x,&y);
    z=per(x,y);
    printf("perimeter is %d ", z);
    
}