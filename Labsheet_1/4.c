/*Write a program to display the area and volume of a sphere given that the
user enters the radius of the sphere.*/

#include <stdio.h>
#include <math.h>


int main()
{


float radius, area, volume;

printf("Input the radius of the sphere and I will tell you it's area and volume:\n");
scanf("%f", &radius);

area = (4*(22.0/7)*radius*radius);
volume =((4.0/3)*(22.0/7)*radius*radius*radius);

printf("The area of the sphere is %f and it's volume is %f", area, volume);

return 0;
}