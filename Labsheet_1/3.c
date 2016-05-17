/*Write a program that displays the sum and the product of three numbers
entered by the user.*/

#include <stdio.h>

int main()

{

    float num1, num2, num3, sum, product;

    printf("Please enter the first number:\n");
    scanf("%f", &num1);

    printf("Please enter the second number:\n");
    scanf("%f", &num2);

    printf("Please enter the third number:\n");
    scanf("%f", &num3);

    sum = (num1 + num2 + num3);
    product = (num1 * num2 * num3);

    printf("The sum of the 3 numbers are %f and the product of the 3 numbers are %f", sum, product);

    return 0;

}