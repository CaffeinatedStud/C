#include <stdio.h>
#include <unistd.h> 
#include <sys/time.h>



int power(int x, int n);


int main(){
		
	struct timeval tv;
	struct timeval tv2;
//	long x;

//	printf("Enter x\n");
//	scanf("%ld", &x);

	gettimeofday(&tv, NULL);
	
	for ( double i = 0; i < 10000000; i++){
		
		 power(5, 2);
	}

//	x^100 + x^99 + x^97;


//	long arzoo = power(x, 100) + power(x, 99) + power(x, 98);
//	printf("%ld \n", arzoo);

	gettimeofday(&tv2, NULL);

	printf("%ld", (tv2.tv_usec - tv.tv_usec));
	return 0;
}

int power(int x, int n){
	
	int m;
	
	if (n == 0){
		return 1;
	}
		
	if (n % 2 == 0) {
		m = power(x, n / 2);
		return m * m;
	}

	else{ 
		return x * power(x, n - 1);
	}
}
