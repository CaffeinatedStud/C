// 2nd try Input 10 integers and display their sum & average

#include <stdio.h>

int main()

{
	int x, num, sum;
	float average;
    x=1;
    sum=0;
    while(x<=10)
    {
        printf("Input integer\n");
        scanf("%d", &num);
        sum = sum + num;
        x = x + 1;
     }

     average = (float)sum/10;
     printf("Sum is %d\n", sum);
     printf("Average is %.2f\n", average);

     return 1;
}