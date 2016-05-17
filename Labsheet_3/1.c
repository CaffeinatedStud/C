//1.Write a program that will read in 4 numbers and print out their average.

#include <stdio.h>

int main()
{
	float fl1,fl2,fl3,fl4,average;
	printf("Enter four numbers\n");
	scanf("%f%f%f%f", &fl1,&fl2,&fl3,&fl4);
	average=((fl1+fl2+fl3+fl4)/4);
	printf("Average is %.2f\n", average);
	return 0;

}