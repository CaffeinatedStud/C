//Write a program to input values into all elements of an integer array A of size 10 and display back the values.

#include <stdio.h>

int main()
{
	int A[10];
	int i;
	printf("Enter 10 integer values:");
	for (i=0;i<10;i++)
	    scanf("%d", &A[i]);
	    printf("Elements input are:");
	    for(i=0;i<10;i++)
	        printf("%d\n",A[i]);
	        
	        return 1;


}
