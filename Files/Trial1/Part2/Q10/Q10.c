/*
Question 10

Write a program that creates a file called “input13.dat”. It then allows you to enter the names and address of a number of persons. For each person it allows you to input the name and address, it computes the length of the names and address and writes in the file “input13.dat”, the length of the name, the name, the length of the address and the address.
*/

#include <stdio.h>
#include <assert.h>

//exit
#include <stdlib.h>

//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>
#include <string.h>

int main(){
	
	int openfile = open("input13.dat", O_CREAT | O_TRUNC | O_RDWR, 0777);

	assert(openfile != -1);

	char name[100];
	char address[100];
	char dummy[10];

	int x = 1;
	
	while(x == 1){
		printf("Enter Name: ");
		fgets(name, 100, stdin);
		write(openfile, name, strlen(name));

		printf("Enter Address: ");
		fgets(address, 100, stdin);
		write(openfile, address, strlen(address));
			
		write(openfile, "\n", 2);

		printf("Enter 1 to continue\n");
		scanf("%d", &x);
		fgets(dummy, 10, stdin);
	}
}
