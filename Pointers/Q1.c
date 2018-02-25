/*
 * 1.Write a program that defines a struct student to hold the following information for a student: surname, other names, address, age. The program should have the following functions:

A function inputStudent() that takes a student struct as parameter and allows of input of data that are stored in the struct parameter.

A function displayStudent() that takes a student struct as parameter and displays the attribute values on the screen.

The program should declare two variables of type student, allow input of data for two students and store them in those variables. The program should then display the names and address of the older student among the two. If they are of the same age, the program should display the names and addresses of both of them.
*/

#include <stdio.h>
#include <math.h>

struct student{
	char surname[50];
	char otherNames[50];
	char address[100];
	int age;
};

void inputStudent(struct student *st){
	
	//int var;
	printf("Enter surname\n");
	fgets(st -> surname, 50, stdin);
	printf("Enter otherNames\n");
 	fgets(st -> otherNames, 50, stdin);
	printf("Enter address\n");
	fgets(st -> address, 100, stdin);
	printf("Enter age\n");
	scanf("%d", &(st -> age));

//	st -> age = var;

}

struct student inputStudent2(){
	struct student st;
	fgets(st.surname, 50, stdin);
	fgets(st.otherNames, 50, stdin);
	fgets(st.address, 50, stdin);
	scanf("%d", &st.age);
	return st;
}



void displayStudent(struct student st){
	printf("Surname is: %s", st.surname);
	printf("OtherNames is: %s", st.otherNames);
	printf("Address is : %s", st.address);
	printf("Age is: %d", st.age);	
}

int main(){
	struct student st;
 	st = inputStudent2();
	displayStudent(st);

	return 0;
}
