/*
 * 2.Write a program that creates an array of 10 student names and an array of 10 student ids. You can choose to input the values or directly assign them. The program should then create two threads. The first created thread executes a loop that displays all the names, while the second thread should execute a loop displaying the ids. In the mean time the parent thread should sleep for 5 seconds, then display “Parent Thread Exiting” and then exits.
 */

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

struct student {
	char name[30];
	int id;
};

void* displayName(void* arg){
	struct student *st = (struct student*) arg;

	for(int i = 0 ; i < 3 ; i++){
		printf("%s\n", st[i].name);
	}
}

void* displayID(void* arg){
	struct student *st = (struct student*) arg;

	for(int i = 0 ; i < 3 ; i++){
		printf("%d\n", st[i].id);	
	}
}

void inputStudent(struct student *st){
	
	char dummy[10];

	for(int i = 0 ; i < 3 ; i++){
		
		printf("Enter Name\n");
		fgets(&st[i].name, 30, stdin);
		strtok(st[i].name, "\n");
		printf("Enter id\n");
		scanf("%d", &st[i].id);
		fgets(&dummy, 10, stdin);
	}
}

int main(){
	
	struct student st[3];
	inputStudent(st);
	
	pthread_t id1;
	pthread_t id2;
	
	pthread_create(&id1, NULL, displayName, (void* ) st);
	pthread_create(&id2, NULL, displayID, (void* ) st);

	sleep(5);
	printf("Parent exiting\n");
}
