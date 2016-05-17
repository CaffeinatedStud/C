/*Write a program to read two initials (letters), e.g. X and Y, and display
them in the form
Hello X.Y.
The initials are to be entered from the keyboard in the same line of input.
*/

#include <stdio.h>

int main()

{
    
    char ini1, ini2;
	printf("enter your initials without any dot or commas in between the 2 letters\n");
	scanf("%c%c", &ini1, &ini2);
	printf("Hello %c.%c\n", ini1, ini2);

	return 0;
}
