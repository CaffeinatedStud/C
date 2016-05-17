/*
According to University regulations, the following mapping between a student’s final
mark and the indicative classification of degree is provided for guidance of the board
of examiners.
>= 70 First Class Honours
60-69 Upper Second Class Honours
50-59 Lower Second Class Honours
40-49 Third Class Honours
<40 Not an honours degree
(There are other regulations that affect the degree classification.)
Write a program to prompt the user to enter a mark as a floating point number. Check
that the mark is in the range 0.0 – 100.0 and, if it is, display the indicative degree
classification according to the mapping above and if not, then display a message
saying that the marks input is invalid.
Test your program to ensure that the mapping is correct.
*/


#include <stdio.h>

int main()
{
	float marks;
	printf("Input mark:\n");
	scanf("%f", &marks);

	if ((marks>=0) && (marks<=100))
	{
	    if(marks>=70)
	    printf("First Class Honours\n");
    
	    if((marks>=60) && (marks<=69))
	    printf("Upper Second Class Honours\n");
    
	    if((marks>=50) && (marks<=59))
	    printf("Lower Second Class Honours\n");
    
	    if((marks>=40) && (marks<=49))
	    printf("Third  class Honours\n");
    
	    if((marks<40))
	    printf("Not an honours degree\n");

	    }
	    else
	    printf("Input mark is not valid\n");

        return 0;
}
