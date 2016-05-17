/*A year is a leap year if it is divisible by 4 unless it is a century year (one that ends in
00) in which case it has to be divisible by 400. Write a program to read in a year and
report whether it is a leap year or not.*/

#include <stdio.h>
int main()

{
	int year;
	printf("Insert year\n");
	scanf("%d",&year);

	if((year%100) == 0)
	{
	    if((year%400) == 0)
	    
	    	printf("%d is a leap year", year);
        else 
            printf("%d is not a leap year", year);
	    	
	    	}
     else
     {
	 if((year%4)==0)
	 
	    printf("%d is a leap year", year); 

	    else
	        printf("%d is not a lear year", year);
	 }

    return 0;
}