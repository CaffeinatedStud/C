#include <stdio.h>
#include <math.h>

struct sphere{
	float surfaceArea;
	float volume;
};

void caluclate(float radius, struct sphere *pogo){
	float volume = 4/3 * 3.142 * radius * radius * radius;
	pogo  -> volume = volume;
    pogo  -> surfaceArea = 4 * 3.142 * radius * radius;	
}

int main(){
	struct sphere pognish;
	caluclate(10.5, &pognish);
	printf("%f", pognish.volume);
}


