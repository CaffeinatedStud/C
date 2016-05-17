//write a program to display the square root of a user-entered real number. use the function sqrt(float) from the Maths lubrary <math.h>

#include <stdio.h>
#include <math.h>

int main()

{
float num, root;

printf("enter number\n");
scanf("%f",&num);
root = sqrt(num);
printf("Square root of %f is %.2f", num, root);
return 0;
}