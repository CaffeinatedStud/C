/*Write a program that converts numbers to words. For example, 895 results in "eight
nine five." */

#include <stdio.h>

int main()
{
	int num, digit;

	printf("Enter number\n");
	scanf("%d", &num);
	
	while(num>=0)
		{digit = (num%10);
			
	    
   	switch(digit){
	
	case 0:{printf("zero ");
	break;}
    
    case 1: {printf("one ");
    break;}
    
    case 2: {printf("two ");
    break;}

    case 3: {printf("three ");
    break;}

    case 4: {printf("four ");
    break;}

    case 5: {printf("five ");
    break;}

    case 6: {printf("six ");
    break;}

    case 7: {printf("seven ");
    break;}

    case 8: {printf("eight ");
    break;}

    case 9: {printf("nine ");
    break;}

    default: {printf("Fuck off");
    break;}

	}
	num=num-digit;
}
	return 0;

}