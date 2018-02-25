/*
 * 3.tModify the program in question 2 so that it uses an array of pointers to struct. Note: In C, we use malloc() to allocate memory and free() to release the memory.
 * */


#include <stdio.h>
#include <math.h>
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

int* findYoungest(struct student *st, int n, int *numberOfYoungest){
	int *arr;
	arr = (int*) malloc(n * sizeof(int));
	
	int youngestAge = st[0].age;
	int count = 0;
	
	for(int i = 1 ; i < n ; i++){
		if((st + i) -> age < youngestAge){
			youngestAge = (st + i) -> age;
		}
	}
	printf("YoungestAge is: %d\n\n", youngestAge);
	
	for(int i = 0 ; i < n ; i++){
		if((st + i) -> age == youngestAge)
		{
			*(arr + count) = i;
			count++;
		}
	}

	*numberOfYoungest = count;
	return arr;

}

void DisplaySpecificStudent(struct student *st){
	printf("Surname is: %s", st -> surname);
	printf("OtherNames is: %s", st -> otherNames);
	printf("Address is : %s", st -> address);
	printf("Age is: %d\n", st -> age);
}

	int main(){
	int n;
	printf("Enter n\n");
	scanf("%d", &n);
	struct student *st;
    st = (struct student*) malloc(n * sizeof(struct student));



	int numberOfYoungest;
	inputStudent(st, n);
	
	int* p;
    p = findYoungest(st, n, &numberOfYoungest);

	for(int i = 0 ; i < numberOfYoungest ; i++){
	
		//DisplaySpecificStudent((&st[*(p+i)]));
		DisplaySpecificStudent((st+(*p+i)));
		printf("\n");
	}
	free(p);
	free(st);
	return 0;
}


