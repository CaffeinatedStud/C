/*
4.A garage needs to store information about servicing it provides to vehicles. For each servicing it performs in a day, it wishes to store the servicing number, the registration number of the vehicle, and the surname of the owner and the cost of the servicing. Write a program containing the following:

A struct servicing containing the following data members,

	int servicing_no;

   	char Reg_no[10];

	char surname[15];

	float cost;

A function Input_serv() to input the data of one servicing record, but not the cost.

A function Disp_serv() to display the data of one servicing record.

A function assign_cost() that assigns the cost of a servicing, given the servicing number. The function should also take as parameter an array containing servicing records.

A main program that declares an array for storing information for up to 20 servicing records (structs). The program then displays a menu that allows users to choose one of the following:

Add a new servicing record.

To enter a servicing number and the program allows the input of the cost and assigns the cost to the servicing record.

To enter a servicing number and the program displays all information for the corresponding record

The display of the average costs for records in the array

The program should then perform the task required by the user. Also an option should be provided for exit the program.
*/

#include <stdio.h>
#include <stdlib.h>

struct garageServicing{
	int servicingNo;
	char regNo[10];
	char surname[15];
	float cost;
	int flagcostEntered;
};

void inputServ(struct garageServicing *ga){
	int dummy;
	printf("Enter servicingNo\n");
	scanf("%d", &(ga -> servicingNo));
	printf("Enter regNo\n");
	scanf("%d", &dummy);
	fgets( ga -> regNo, 10, stdin);
	printf("Enter surname\n");
	fgets(ga -> surname, 15, stdin);
	ga -> flagcostEntered = 0;

}

void displayServ(struct garageServicing *ga){
	printf("\nServicing No: %d\n", ga -> servicingNo);
	printf("regNo: %s", ga -> regNo);
	printf("surname: %s", ga -> surname);
	
	if(ga -> flagcostEntered == 1){
		printf("Cost: %f\n\n", ga -> cost);
	}
}

void assignCost(struct garageServicing *ga, int n, int sNo){
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(((ga + i) -> servicingNo) == sNo){
			flag = i;
		}
	}
	if(flag == -1){
		printf("Wrong service number\n");
		return;
	}
    if((ga + flag) -> flagcostEntered == 1){
		printf("Cost already entered for this shit\n");
		return;
	}
	printf("Enter cost\n");
	scanf("%f", &((ga + flag) -> cost));
	(ga + flag) -> flagcostEntered = 1;

}

float averageCost(struct garageServicing *ga, int n){
	float sum = 0;
	int count = 0;
	for(int i = 0; i < n; i++){
		if((ga + i) -> flagcostEntered == 1){
			sum += ((ga + i) -> cost);
			count++;
		}
	}
	return sum/(float)count;
}

int main(){
	struct garageServicing *ga;
	ga = (struct garageServicing*) malloc (20* sizeof(struct garageServicing));
	
	int x;
	int pog;
	int count = 0;

	while(1){
		printf("Press 1 to add a new Record\n");
		printf("Press 2 to input the cost and assign cost to a servicing record\n");
		printf("Press 3 to get average costs\n");
		printf("Press 4 to enter a servicingNo and display details\n");
		printf("Press 5 to leave\n");
		scanf("%d", &x);

		switch(x){
			case 1:
				inputServ(ga + count);
				count++;
				break;

			case 2:
				printf("Enter servicingNo\n");
				int sNo;
				scanf("%d", &sNo);
				assignCost(ga, count, sNo);
				break;

			case 3:
				printf("Average cost is: %f", averageCost(ga, count));
				break;

			case 4:
				printf("Enter servicingNo\n");
				scanf("%d", &pog);
				for(int i = 0; i < count; i++){
					if((ga + i) -> servicingNo == pog){
						displayServ((ga + i));
						break;
						
					}
					else if(i == count -1){
						printf("Wrong serviceNo\n");
					}
				}
				break;

			case 5:
				free(ga);
				return 0;
		}
	}
}
