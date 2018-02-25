#include <stdio.h>
#include <stdlib.h>


void passing(float variable, float *returnOne, float *returnTwo){
	float abc  = variable * 2;
	float def = variable * 4;
//	*returnOne = abc;
//	*returnTwo = def;
	
	returnOne = (float*)malloc(1* sizeof(float));
	returnOne = &abc;
	returnTwo = &def;
}

int main(){

	float var;
	printf("Enter variable\n");
	scanf("%f", &var);

	float mTwo;
	float mFour;

	passing(var, &mTwo, &mFour);

	printf("%f, %f", mTwo, mFour);
	
}

