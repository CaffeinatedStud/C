/* sum of 2 integers */

#include <stdio.h>

int main()
{
int integer1, integer2, sum;
printf("Enter first integer\n");
scanf("%d", &integer1);
printf("Enter second integer\n");
scanf("%d",&integer2);
sum = integer1 + integer2;
printf("sum is %d\n", sum);
return 0;
}