//write a program to input the name of a person and display the number of vowels in the name;


#include <stdio.h>

int main()
{
	char name[20]; 
	char ch;
	int i, count;
	printf("Enter name\n ");
	scanf("%s", &name);
	count=0;
	i=0;

	while ((name[i]!='\0') &&  (i<100))
	{
		ch = name[i];
		if ((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U') || (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
			count++;
		    i++;
	}
	
    printf("No of vowels is %d\n", count);
    return 1;
}
