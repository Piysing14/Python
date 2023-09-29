#include <stdio.h>

int main() {
    
    int sp;
    printf("Enter the speed in km/hr\n");
    scanf("%d",&sp);
    
    sp=(sp<=65) ? 65: (sp<=70)? (70) : (90);
    switch(sp)
    {
        case 65:printf("No speeding ticket"); break;
        case 70:printf("speeding ticket"); break;
        case 90:printf(" Expensive speeding ticket");break;
        default:printf("Enter correct speed");
    }

    return 0;
}