/* Exercise 3
Write a program to print the sum of all even numbers between 2 and 20 inclusive
*/

#include <stdio.h>

int main()

{
	int x, sum;
	x=2;
	sum=0;
	while(x<=20)
	{
        sum = sum + x;
	    x=x+2;
	}
    printf("sum is %d\n", sum);
	
	return 0;
}