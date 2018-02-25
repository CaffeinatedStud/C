/*
 * 2.Modify the program in question 2, so that the main() function declares an array of size 20 of the struct student, allows the input of an integer value n, and performs the input of data for n students, then displays them back. The program should then display the name, address and age of the youngest  student in the array. If there are several students with the youngest age, the program will display only the first one.*/

#include <stdio.h>
#include <stdlib.h>

struct student{
	char surname[50];
	char otherNames[50];
	char address[100];
	int age;
};

void inputStudent(struct student *st, int n){
	char dummy[50];
	for(int i = 0 ; i < n ; i++){
		
		printf("Enter surname\n");
		fgets(dummy, 10, stdin);
		fgets(st[i].surname, 50, stdin);
		printf("Enter otherNames\n");
		fgets(st[i].otherNames, 50, stdin);
		printf("Enter address\n");
		fgets(st[i].address, 100, stdin);
		printf("Enter age\n");
		scanf("%d", &(st[i].age));
	}
}

int* findYoungest(struct student st[], int n, int *numberOfYoungest){
	int *arr;
	arr = (int*) malloc(n * sizeof(int));
	
	int youngestAge = st[0].age;
	int count = 0;
	
	for(int i = 1 ; i < n ; i++){
		if(st[i].age < youngestAge){
			youngestAge = st[i].age;
		}
	}
	printf("YoungestAge is: %d\n\n", youngestAge);
	for(int i = 0 ; i < n ; i++){
		if(st[i].age == youngestAge)
		{
			*(arr + count) = i;
			count++;
		}
	}

	*numberOfYoungest = count;
	return arr;

}

void DisplaySpecificStudent(struct student st[]){
	printf("Surname is: %s", st -> surname);
	printf("OtherNames is: %s", st -> otherNames);
	printf("Address is : %s", st -> address);
	printf("Age is: %d\n", st -> age);
}

	int main(){
	struct student st[20];
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	
	if(n < 20){
		printf("Valid\n");
	}
	else{
		printf("invalid\n");
	}
	
	int numberOfYoungest;
	inputStudent(st, n);
	
	int* p;
    p = findYoungest(st, n, &numberOfYoungest);

	for(int i = 0 ; i < numberOfYoungest ; i++){
	
		DisplaySpecificStudent((&st[*(p+i)]));
		printf("\n");
	}
	free(p);
	return 0;
}

