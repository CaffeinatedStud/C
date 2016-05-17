/*Write a program that prompts the user to enter the numerators and
denominators of two fractions. 
The program should then display the
numerator and denominators of the fractions that represent:

a) the product of the two input fractions, and
b) the sum of the two input fractions.

[Hint: If the numerators and denominators of the two fractions are n1, d1
and n2, d2, then the product is (n1* n2)/( d1* d2), and the sum is (n1* d2 +
n2* d1)/( d1* d2). Avoid entering zero for d1 or d2!]
*/

#include <stdio.h>

int main()
{
	int num1, den1, num2, den2, sum_num, prod_num, den;
	printf("Enter first numerator\n");
	scanf("%d", &num1);
	printf("Enter first denominator\n");
	scanf("%d", &den1);
    printf("Enter second numerator\n");
    scanf("%d", &num2);
    printf("Enter second denominator\n");
    scanf("%d", &den2);

    sum_num = (num1*den2 + num2*den1);
    prod_num = (num1*num2);
    den= (den1*den2);

    printf("Numerator for the sum of the 2 fractions is: %d\n", sum_num );
    printf("Denominator for the sum of the 2 fractions is: %d\n\n", den);

    printf("Numerator for the product of the 2 fractions is: %d\n", prod_num);
    printf("Denominator for the product of the 2 fractions is: %d\n", den);

    return 0;

}