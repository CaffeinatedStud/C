#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>
#include <string.h>

#include <assert.h>
#include <stdio.h>
	

int main(){
	int openfile2 = open("pogo.txt", O_RDONLY, 0777);
	assert(openfile2 != -1);

	char test[100];
	
	read(openfile2, test, 100);
	printf("%s", test);
	int count = 0;
	for(int i = 0; test[i] != '\0' ; i++){
		count++;

	}
	printf("%d\n", count);
	
	char buff[10][100];

	char* token;

	token = strtok(test, "\n");
	while( token != NULL ){
      
	  printf( "%s\n", token );
      token = strtok(NULL, "\n");
   }
}
