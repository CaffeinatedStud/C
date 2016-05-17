/*10. Write a program to calculate the estimated journey time of a train. The
program should request and read the distance in miles and the average
speed in miles per hour, and display the estimated journey time in hours
and minutes to the nearest minute.

Test your program with:
a) Distance = 1.01, speed = 1. [Result should be 1 hour & 1 minute.]
b) Distance = 1.005, speed = 1. [Result should be 1 hour & 0 minutes.]
*/

#include <stdio.h>

int main()
{
    
    float av_speed, distance, time_hour, time_min;

	printf("Input the distance of the journey in miles:\n");
	scanf("%f", &distance);
	printf("Input the average speed in miles per hour:\n");
	scanf("%f", &av_speed);
	
    time_hour = (distance/av_speed);
    time_min = (time_hour*60);
    
    if (time_min < 60)
    {
    	printf("estimated Journey will take 0 hours and %d minutes\n", time_min );
    }
    if (time_min > 60)
    {
    	printf("estimated Journey will take %d hours and %d minutes\n", (int)(time_hour), (int)(time_hour % 60));
    }

    if (time_min = 60)
    	printf( "estimated Journey will take 0 hours and %d minutes\n", time_min);
    return 0;

}