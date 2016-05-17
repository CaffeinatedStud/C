/* Greet & sum */

#include <stdio.h>


int main()
{
    int integer3, integer1, integer2, sum;

	printf("Hello!, I am a summing program. Do you want to sum some integers? Press 1 for Yes or any other integers for No.\n");
	scanf("%d", &integer3);
     if
     	(integer3 == 1){
         printf("Enter first integer\n");
         scanf("%d", &integer1);
         printf("Enter second integer\n");
         scanf("%d", &integer2);
         sum = integer1 + integer2;
         printf("Sum is %d\n", sum);
     }
         else{
         	printf("Thanks for using me, Goodbye!");
      
     }
     return 0;    
}