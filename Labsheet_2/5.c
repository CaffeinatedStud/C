/*
The UK sequence of traffic lights is:
"Red" (means stop); this is followed by:
"Red and Amber" (means prepare to go); this is followed by:
"Green" (means go); this is followed by:
"Amber" (means prepare to stop); this is followed by:
"Red"; etc..
Write a program that prompts the user to enter the current state of a traffic light, then
displays the next state. For example, if the current state is "Red and Amber", the next
state is "Green".
Use a menu system to obtain the current.
*/

#include <stdio.h>

int main()
{
    int state;

	printf("What is the current state of the traffic light\?\n");
	printf("Enter the number corresponding to the choice\n");
    printf("(1) Red\n");
    printf("(2) Red and Amber\n");
    printf("(3) Green\n");
    printf("(4) Amber\n");

    scanf("%d", &state);
        
    if(state==1)
    	printf("Red and Amber\n");
    else
    if(state==2)
    	printf("Green\n");
    else
    if(state==3)
    	printf("Amber\n");
    else
    if(state==4)
    	printf("Red\n");
    else
    	printf("Number entered is invalid\n");
    

    return 0;

    
}