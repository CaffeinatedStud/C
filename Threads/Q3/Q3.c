#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>


long factorial(int n){
	int c;
	long result = 1;

	for(c = 1; c <= n; c++){
    	result = result * c;
	}

	return result;
}

double calcSine(int x){
	//sin x;
	
	double sine = 0;
	double fact;
	for(int i = 0 ; i < 30 ; i++){
		fact = (double) factorial((2* i) + 1);

		sine += ((pow(-1, i) / fact) * pow(x, ((2 * i) + 1)));
		printf("%f\n", sine);

	return sine;

}

int main(){

	printf("%f", calcSine(0.5));
}
