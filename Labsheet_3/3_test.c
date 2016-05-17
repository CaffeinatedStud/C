/* Author: Pravesh Boodhoo
Course: E316 BSc (Hons) Information and Communication Technologies
Student ID: 1318992
Purpose: program that calculates the sum of the square of all multiples of 3 between 0 and
100.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

int num, square, sum;

num=0;
system("pause");
printf("%d, \n", num);

while(num<101)
{
num=num+3;
printf("%d, \n", num);
square=num*num;
sum+=num;
printf("Sum of all squares: %d\n", square);
}
return 1;
}
