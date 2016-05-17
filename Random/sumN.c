// write a program that allows the user to input an integer value n, followed by n more integer values and display the sum & average of these n values 

#include <stdio.h>

int main()
{
	int x, n, m, sum;
	float average;
    
    x=1;
    sum=0;
    printf("Input n\n");
    scanf("%d", &n);
    
    while(x<=n)
    {
     printf("enter integer\n");
     scanf("%d", &m);
     sum = sum+m;
     x = x + 1;
    }
     average = (float)sum/n;
     printf("Sum is %d and average is %.2f\n", sum, average);
     
     return 1;
}