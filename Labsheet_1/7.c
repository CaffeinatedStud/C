/* Write a program to display the ASCII code of a user-entered character,
then display the characters with ACSII codes one less than and one greater
than the code of the character entered. */

#include <stdio.h>

int main()
{
	char char0, char1, char2;

	printf("Input character:\n");
	scanf("%c", &char1);
	
	char0 = char1 - 1;
	char2 = char1 + 1;

     printf("ASCII code of input character is: %d\n", char1);
     printf("ASCII for 1 less is: %d\n", char0 );
     printf("ASCII for 1 greater is %d\n", char1 );

     return 0;

}