/*Write a program to display the area and perimeter of a rectangle. Prompt
the user to enter the length and breadth (in cms.) of the rectangle.
*/

#include <stdio.h>

int main()
{
	float length, breadth, perimeter, area;

	printf("Input the length of the rectangle in centimeters\n");
	scanf("%f", &length);

	printf("Input the breadth of the rectangle in centimeters\n");
    scanf("%f", &breadth);
  
    perimeter = (2*length) + (2*breadth);
    area = (length*breadth);

    printf("The perimeter of the rectangle is %f centimeters and the area of the rectangle is %f", perimeter, area);

    return 0;
}