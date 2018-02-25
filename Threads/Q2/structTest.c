/*
 * 2.Write a program that creates an array of 10 student names and an array of 10 student ids. You can choose to input the values or directly assign them. The program should then create two threads. The first created thread executes a loop that displays all the names, while the second thread should execute a loop displaying the ids. In the mean time the parent thread should sleep for 5 seconds, then display “Parent Thread Exiting” and then exits.
 */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

struct student{
	char name[50];
	int id;
};

void inputStudent(struct student *st){
	strcpy(st -> name, "abcdefg");
	st -> id = 1000;

}

void displayStudent(struct student *st){
	printf("%s\n", st -> name);
	printf("%d\n", st -> id);

}

void displayAllStudent(struct student *st, int n){
	for(int i = 0 ; i < n ; i++){
		printf("%s\n", st[i].name);
		printf("%d\n", st[i].id);
	}
}

void inputAllStudents(struct student *st, int n){
	char dummy[10];
	for(int i = 0 ; i < n ; i++){
		
		printf("Enter name\n");
		scanf("%d", dummy);
		fgets(st[i].name, 50, stdin);
		strtok(st[i].name, "\n");
		printf("Enter id\n");
		scanf("%d", &st[i].id);
		
	}	
}

int main(){

	struct student *st;
	st = (struct student*) malloc (5 * sizeof(struct student));
	
	inputAllStudents(st, 5);
	displayAllStudent(st, 5);

	struct student *st2;
	st2 = (struct student*) malloc (1 * sizeof(struct student));

	inputStudent(&st2);
	displayStudent(&st2);

	inputStudent(&st[2]);
	displayAllStudent(st, 5);
	
	
}


