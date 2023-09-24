#include <stdio.h>
#include <math.h>

int main() 
{
    int x1,y1,x2,y2,x3,y3;
    float l1,l2,l3;
    float base,height;
    
    printf("Enter x1 & y1 (A): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 & y2 (B): ");
    scanf("%d%d", &x2, &y2);
    printf("Enter x3 & y3 (C): ");
    scanf("%d%d", &x3, &y3);
    printf("\nPoints are A(%d,%d), B(%d,%d), C(%d,%d)",x1,y1,x2,y2,x3,y3);
    
    l1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    
    printf("\nLength of AB = %.2f unit\nLength of BC = %.2f unit\nLength of CA = %.2f unit",l1,l2,l3);
    
    if (l1==l2 || l2==l3 || l3==l1)
    {
        if(l1==l2)
        {
            base=l3;
            height = sqrt(pow(l1,2)-pow(base/2,2));
            printf("\nBase = %.2f unit \nHeight = %.2f unit \nArea of Triangle = %.2f sq. unit",base,height, 0.5*base*height);
        } 
        else if(l2==l3)
        {
            base=l1;
            height = sqrt(pow(l2,2)-pow(base/2,2));
            printf("\nBase = %.2f unit \nHeight = %.2f unit \nArea of Triangle = %.2f sq. unit",base,height, 0.5*base*height);
        } 
        else
        {
            base=l2;
            height = sqrt(pow(l3,2)-pow(base/2,2));
            printf("\nBase = %.2f unit \nHeight = %.2f unit \nArea of Triangle = %.2f sq. unit",base,height, 0.5*base*height);
        }
    }
    else
    {
        printf("\nTriangle is not an Isoceles Triangle");
    }
	return 0;
}
