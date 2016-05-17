/*Write a program that reads a character and prints out whether or not it is a vowel or a
consonant.*/

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter character\n");
	scanf("%c", &ch);
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	printf("The character %c is a vowel\n",ch);
	else
	printf("The character %c is a consonnant\n",ch);

	return 1;

}