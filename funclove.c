#include<stdio.h>

void romance(int r)
{
        while (r>0)
    {
        printf("Very ");
        r--;
    }
     printf("Much\n");
     printf("\n");
}

void main()
{
    int i=0;
    printf("How deep is your love? 0-10\t");
    scanf("%d",&i);
    printf("\nI love you very ");
    romance(i);
}