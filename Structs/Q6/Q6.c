/*  Write a function called inputArray() that has as parameters an integer array, A, and an integer, n. It allows the input of n values into array A. Write a function displayArray() that also takes as parameters an integer Array, A, and an integer, n, and performs the display of n values from A. Write the required program code to test your functions.

Strings in C are arrays of characters.
*/

#include <stdio.h>

void inputArray(int arr[], int n);
void displayArray(int arr[], int n);

int main(){
	
	int n;
	
	printf("Enter n\n");
	scanf("%d", &n);
	
	int arr[n];
	inputArray(arr, n);
	displayArray(arr, n);
}


void inputArray(int arr[], int n){
	for(int i = 0 ; i < n ; i++){
		printf("Enter integer\n");
		scanf("%d", &arr[i]);
	}
}
void displayArray(int arr[], int n){
	for(int i = 0 ; i < n ; i++){
		printf("%d\n", arr[i]);
	}
};
