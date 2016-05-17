//Sum & Product of 2 integers

#include <Stdio.h>
int main()
{
int integer1, integer2, sum, product, char1;
printf("If you want to find the sum of the 2 integers Type S or type P for multiplication\n");
scanf("%c", char1);
if (char1 == "S") {
printf("Enter first integer\n");
scanf("%d", integer1);
printf("Enter second integer\n");
scanf("%d", integer2);
sum = integer1 + integer2;
printf("sum is %d", sum);
}
if (char1 == "P") {
printf("Enter first integer\n");
scanf("%d", integer1);
printf("Enter second integer\n");
scanf("%d", integer2);
product = integer1 * integer2;
printf("Product is "%d", product);
}
else
printf("Fuck off m8");
return 0;
}
