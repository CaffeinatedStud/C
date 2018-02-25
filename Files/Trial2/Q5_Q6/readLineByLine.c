#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(){
	char buffer[1];
	char buffer2[100];
	int i;

	int ab = open("lab45.dat", O_RDONLY, 0777);
	assert(ab != -1);

//	int bd = read(ab, &buffer[0], 1);
//	read(ab, &buffer[1], 1);
//	printf("%s", buffer);
	
	i = 0;
	while((read(ab, &buffer[i], 1)) == 1){
		if(buffer[i] == '\n'){
			printf("%s", buffer);
			i = 0;
			continue;
		}
		i++;
	}
	
}

