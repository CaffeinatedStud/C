/*Write a program that prompts the user for three integers, and then
displays, for each number entered,
· the number,
· its double,
· its square, and
· its cube.
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3, doub1, doub2, doub3, sqr1, sqr2, sqr3, cube1, cube2, cube3;
    
    printf("Enter first integer\n");
    scanf("%d", &num1);
    printf("Enter second integer\n");
    scanf("%d", &num2);
    printf("Enter third integer\n");
    scanf("%d", &num3);

    doub1 = (2*num1);
    doub2 = (2*num2);
    doub3 = (2*num3);

    sqr1 = (num1*num1);
    sqr2 = (num2*num2);
    sqr3 = (num3*num3);

    cube1 = (num1*num1*num1);
    cube2 = (num2*num2*num2);
    cube3 = (num3*num3*num3);

    printf("number entered %d | double is %d | square is %d | cube is %d\n", num1, doub1, sqr1, cube1);
        printf("number entered %d | double is %d | square is %d | cube is %d\n", num2, doub2, sqr2, cube2);
            printf("number entered %d | double is %d | square is %d | cube is %d\n", num3, doub3, sqr3, cube3);
 return 0;
 }