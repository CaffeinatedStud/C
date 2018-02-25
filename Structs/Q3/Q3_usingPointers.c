/*
 * Write a function that has as parameter the radius of a sphere and it calculates the surface area and volume of the sphere. These values should be passed to the caller.

A toy is made of two balls, one fitted inside the other one as shown in the diagram below. The space in-between the balls is filled with a liquid. Write a main function that allows the input of the radius of each of the balls and it calculates and displays the volume of the liquid as well as the total surface area that is in contact with the liquid. Make use of the function defined above.

*/
#include <stdio.h>
#include <math.h>
#define pi 3.142

void calculate(float radius, float* volume, float* surfaceArea){
    *volume = (((float) 4/(float) 3) * pi * pow(radius, 3));
	*surfaceArea = (4 * pi * pow(radius, 2)); 
}

int main(){
	float  radius = 10.5;
	float volume;
	float surfaceArea;
	calculate(radius, &volume, &surfaceArea);
	printf("volume is: %f\nSurface area is: %f\n", volume, surfaceArea);	
}
