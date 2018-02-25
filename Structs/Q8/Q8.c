/*
 *
 * Question 8

You have to input the surname, first name of n students (n<=20) and their marks in OS. Write a program that contains the following:

A function to perform the input of the surname, first name and marks of a student.

A function that has as parameters an array of floats and an integer count, and it finds the positions of the maximum and minimum values in the array and passes these to the caller. The integer count represents the number of elements in the array.

A main() function that allows the input of an integer value n. It calls the above functions to:

operform the inputs of surname, first name and marks of n students.

oFind and display the surname, first name and marks of the student having scored the highest marks and of the student having scored lowest marks.
*/

#include <stdio.h>

struct student{
	char firstName[50];
	char lastName[50];
	float marks;
};

void input(struct student s[], int n){
	char dummy[10];

	for(int i = 0 ; i < n ; i++){

		printf("Enter firstName\n");
		fgets(dummy, 10, stdin);	
		fgets(s[i].firstName, 50, stdin);
		
		printf("Enter lastname\n");
		fgets(s[i].lastName, 50, stdin);

		printf("Enter marks\n");
		scanf("%f", &s[i].marks);
	}
}

void displaySpecific(struct student s[], int posn){

	printf("FirstName is: %s", s[posn].firstName);
	printf("LastName is: %s", s[posn].lastName);
	printf("Marks is: %f", s[posn].marks);
	
}

int posnHighest;
int posnSmallest;

void findHighestSmallest(float arr[], int n){
	float highest = arr[0];
	posnHighest = 0;
	posnSmallest = 0;
	float smallest = arr[0];

	for(int i = 1 ; i < n ; i++){
		if(arr[i] > highest){
			highest = arr[i];
			posnHighest = i;
		}
		if(arr[i] < smallest){
			smallest = arr[i];
			posnSmallest = i;
		}
	}
}


int main(){
	
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	struct student st[n];
	
	input(st,n);
	
	//converting marks to array of float to pass to function, #dafuq dude;
	float arr[n];
	for(int i = 0 ; i < n ; i++){
		arr[i] = st[i].marks;
	}
	
	findHighestSmallest(arr, n);
	
	printf("Highest mark\n");
	displaySpecific(st, posnHighest);
	printf("Lowest Mark\n");
	displaySpecific(st, posnSmallest);

		
}

