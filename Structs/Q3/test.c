#include <stdio.h>

void increment(int **x){
	*x =(*x +1 );
}

int main(){
	int x = 0;
	increment(*(&x));
	printf("%d", x);
}
