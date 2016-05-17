//comparing 2 integers and give the relationship between the 2

#include <stdio.h>


main()
{
    int num1, num2;

	printf("Input 2 integers and I will tell you\n");
	printf("the relationship between them\n");
	
	scanf("%d%d", &num2, &num2);

	if (num1==num2);
	printf("%d is equal to %d\n", num1, num2);

	if (num1 != num2);
	printf("%d is not equal to %d\n", num1, num2);

	if (num1 > num2);
	printf("%d is greater than %d\n", num1, num2);

	if (num1 < num2);
	printf("%d is less than %d\n", num1, num2);

	if (num1 >= num2);
	printf("%d is greater or equal to %d\n", num1, num2);

	if (num1 <= num2);
	printf("%d is less than or equal to %d\n", num1, num2);
 

	return 0;
}