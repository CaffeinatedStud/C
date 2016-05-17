//Write a program that calculates the sum of the square of all multiples of 3 between 0 and 100.

#include <stdio.h>

int main()
{
	int x,y,sum;
	x=0;
	sum=0;
	while(x<100)
	{
    y=x*x;
    sum=sum+y;
    x=x+3;

}
    printf("%d\n", sum);
    
    return 1;

}