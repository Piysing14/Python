#include<stdio.h>
int volume(int cube)
{
    return(cube*cube*cube);
}

void main(void)

{
    int r,v;
    printf("enter radius\t");
    scanf("%d",&r);
    v=volume(r);
    printf("voulme is %d",v);
}