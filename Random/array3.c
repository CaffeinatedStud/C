//weite a program to input values into all elements of an integer array A of the size 10 and display back the values in reverse order.

#include <stdio.h>

int main()
{
	int i;
	int A[10];

	printf("Enter 10 intergers\n");
	for(i=0;i<10;i++)
		scanf("%d", &A[i]);

	printf("The 10 intergers entered are:\n");
	for(i=0;i<10;i++)
		printf("%d\n", A[9-i]);

	return 1;

}