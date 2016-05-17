// write a program that allows the input of 10 integer values and displays their sum and average 

#include <stdio.h>

int main()
{
	int x=1;
	int num; 
	int sum=0;
    float average;

        while(x<=10)
    {
    printf("Input an integer\n");
    scanf("%d", &num);
    x=x+1;
    sum= sum + num;
    }
    average = (float)sum/10;

    printf("sum is %d and average is %.2f", sum, average);
    
    
}