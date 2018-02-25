//exit
#include <stdlib.h>
#include <stdio.h>

// open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>


int main(){
	//open
	
	int fd;
	fd = open("myFile.txt", O_CREAT | O_WRONLY, 0600);

	if(fd == -1){
		printf("File Creation/opening Failed\n");
		exit(1);
	}

	//write
	char buffer[14] = "Hello World\n";
	write(fd, buffer, 13);
	
	close(fd);
	
	//read
	
	char readBuffer[14];

	fd = open("myFile.txt", O_RDONLY);

	if(fd == -1){
		printf("File Opening failed\n");
		exit(1);
	}

	read(fd, readBuffer, 13);
	close(fd);

	printf("%s", readBuffer);

	return 0;
}
