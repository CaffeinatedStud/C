/*Exercise:
Write a program that allows the user to input an integer value n, followed by n floating point numbers and display the sum of these n values as well as the largest and smallest among the values. You can assume tat the n real values are greater than 0 and less than 1000. Make use of for loops
*/

#include <stdio.h>
int main()
{
	int i,n;
	float sum=0, min, max, x;
	printf("Input value for n:");
	scanf("%d", &n);
	min=1000;
	max=0;
	printf("Input %d floating point numbers\n",n);

	for (i=1; i<=n; i++)
	{
	    scanf("%f", &x);
	    sum = sum+x;
	    if(x<min)
	        min=x;
	    if (x>max)
	        max=x;

	}


    printf("sum:%7.2f\tsmallest: %7.2f\tlargest:%7.2f\n", sum, min, max);
    return 1;
}