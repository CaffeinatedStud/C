/*4.Consider the sequence 1, 2, …, n. Write a program that will calculate the sum, product and
average of the numbers in the sequence. The value of n will have to be input.*/

#include <stdio.h>

int main()
{
	int x,n,product, average,sum;
    printf("enter n\n");
    scanf("%d",&n);
    x=1;
    product=1;
    sum=0;
    while(x<=n)
    {
        sum=sum+x;
        product=product*x;
        x=n+1;

    }
    average=(sum/n);
    printf("sum is %d, average is %d and product is %d",sum ,average, product);
    return 1;


}