//write a program to calculate the 200th triangular number

#include <stdio.h>

int main()
{
    int n, t;
	printf("Input which triangular number you want\n");
    scanf("%d",&n);
    t = (n*(n+1))/2;
    printf("%d th triangular number is %d", n, t);

    return 1;
}