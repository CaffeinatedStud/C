/*
Question 6

Write a program to open the file in question 5, read all the data and display them on the screen.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>

int main(){

	char buffer[100];
	int i;
	
	int	ab = open("lab45.dat", O_RDONLY, 0777);
	assert(ab != -1);

	read(ab, buffer, 1000);
	for(i = 0 ; i < 1000; i++){
		if(buffer[i] == '\0'){
			break;
		}
	}

	printf("%.*s", i - 1 , buffer);

	close(ab);
	
}
