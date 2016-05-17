// Reads an integer value from 0 to 4 and outputs the value in words.

#include <stdio.h>
int main()

{
    int value;

	printf("Enter the integer and I will\n");
	printf("tell you the value in words:");
	scanf("%d", &value);

	if(value==0)
	   printf("Zero");
    else
	  if(value==1)
	  printf("one\n");
      else
	    if(value==2)
	    printf("two\n");
	    else
	      if(value==3)
	      printf("three\n");
          else
	        if(value==4)
	        printf("four\n");
            else
              printf("Wrong value\n");


return 1;    

}