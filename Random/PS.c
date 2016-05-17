/* 1. Sum 2 integers
   2. Product 2 integers
   3. Divide 2 integers

*/

#include <stdio.h>

int main()
{

int integer1, integer2, sum, product;


printf("Enter first integer\n");	
scanf("%d", &integer1);

printf("Enter second integer\n");
scanf("%d", &integer2);

sum = integer1 + integer2;
product = integer1 * integer2;

printf("sum of both integers is %d\n", sum);
printf("product of both integers is %d\n", product);

return 0;
}
