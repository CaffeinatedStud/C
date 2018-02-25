/*
Question 5

Write a program that opens a file called “lab45.dat” for writing. If the file does not exist, the program creates it. If it exists already, the program will simply overwrite it. Your program should then read data for 5 students from the terminal and write them into the file. Your data should consist of the names of students (20 characters), a student id (10 characters), date of birth (10 characters), gender (7 characters (male/female)) and marital status (10 characters(single/married)). Write the data in the file as individual fields.

*/

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
	

	char name[5][20];
	char sID[5][10];
	char dob[5][10];
	char gender[5][7];
	char maritalStatus[5][10];
	
	for(int i = 0; i < 3 ; i++){
		printf("Enter data for student %d\n", (i + 1));
		puts("Name");
		fgets(name[i], 20, stdin);
		puts("Student ID");
		fgets(sID[i], 10, stdin);
		puts("dob");
		fgets(dob[i], 10, stdin);
		puts("gender");
		fgets(gender[i], 7, stdin);
		puts("Marital Status");
		fgets(maritalStatus[i], 10, stdin);

	}

	int ab = open("lab45.dat", O_CREAT | O_TRUNC | O_WRONLY, 0777);
	assert(ab != -1);

	for(int i = 0 ; i < 3 ; i++){
		write(ab, name[i], strlen(name[i]));
		write(ab, sID[i], strlen(sID[i]));
		write(ab, dob[i], strlen(dob[i]));
		write(ab, gender[i], strlen(gender[i]));
		write(ab, maritalStatus[i], strlen(maritalStatus[i]));	
	}

	close(ab);

}
