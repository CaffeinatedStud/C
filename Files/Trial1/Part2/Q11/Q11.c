/*Question 11

Write a program that reads the file “input13.dat” (created in question 10), displays the name, the size of the name, the address and the size of the address for the person with the longest name as well as for the person with the longest address. The program should also display the average size of names and average size of addresses in the file.
*/

#include <stdio.h>
#include <assert.h>

//exit
#include <stdlib.h>

//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>

#include <string.h>
#include <stdlib.h>



int main(){
	
	int openfile2 = open("input13.dat", O_RDONLY);

	assert(openfile2 != -1);

	char name[100][100];
	char address[100][100];
	char dummy[100];
	int count = 0;

	int i = 0;
	int indexName = 0;
	int indexAddress = 0;

	while(read(openfile2, &name[indexName][i], 1) == 1){
		i++;
		if(name[indexName][i - 1] == '\n'){
			indexName++;
			i = 0;
			while(read(openfile2, &address[indexAddress][i], 1) == 1){
				if(address[indexAddress][i] == '\n'){
					indexAddress++;
					i = 0;
					break;
				}
				i++;
			}	
		}
		
	}

	for(int i = 0 ; i < indexAddress ; i++){
		printf("%s", name[i]);
		printf("%s", address[i]);
	}
}
