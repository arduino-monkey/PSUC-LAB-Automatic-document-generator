#include <stdio.h>
#include <math.h>
int main()
{
    //add details
    float radius;
    float surface_area, volume;
    printf("Enter radius of the sphere : ");
    scanf("%f", &radius);

    surface_area = 4 * (22/7) * radius * radius;
    volume = (4.0/3) * (22/7) * radius * radius * radius;
    
    printf("Surface area of sphere is: %.3f\n", surface_area);
    printf("Volume of sphere is : %.3f\n", volume);
    return 0;
}