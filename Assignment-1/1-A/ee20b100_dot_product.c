#include <stdio.h>

int main()

{
    double radius, circumference, area ;
    
    printf("please enter value of radius as r \n");

    scanf("%lf", &radius);
    
    circumference= 2*3.14*(radius);
    
    area = 3.14*(radius*radius);
    
    printf("\n the area and circumference of the circle is %lf(m^2) and %lf(m)", area, circumference );
    

    return 0;
}