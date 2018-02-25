/*Using a text editor, create a file called “lab44.dat”. Write a few sentences in it. Write a program to read the text from the file and display on the screen.
*/

#include <stdio.h>

//exit
#include <stdlib.h>

//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>

#include <assert.h>
#include <string.h>


int main(){
	//create file lab44.dat and open;
	int fd = open("lab44.dat", O_CREAT | O_TRUNC | O_RDWR, 0777);

	assert(fd != -1);	

	char data[100];
	int x;
	int count;

	do{

	printf("Enter some shit\n");	
	fgets(data, 100, stdin);
	
	count = 0;
	for(int i = 0 ; i < strlen(data); i++){
		count++;
		if(data[i] == '\n'){
			break;
		}
	}
	
	write(fd, data, (count));
	printf("Press 1 if you want to enter more lines\n");
	scanf("%d", &x);
	
	}while(x == 1);
	close(fd);

	fd = open("lab44.dat", O_RDONLY, 0777);	
	assert(fd != -1);

	char str[100];
	
	read(fd, str, 100);
	close(fd);
	printf("%s", str);
	
}
