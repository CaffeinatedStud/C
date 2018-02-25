/*
Write a program that performs the input of the surname, first name and address of a person and displays  back these values.
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char fname[50];
	char surname[50];
	char address[100];

	printf("Enter fname\n");
	fgets(fname, 50, stdin);
	strtok(fname, "\n");

	printf("Enter surname\n");
	fgets(surname, 50, stdin);
	strtok(surname, "\n");


	printf("Enter address\n");
	fgets(address, 100, stdin);
	strtok(address, "\n");

	printf("%s %s %s", fname, surname, address);
}
