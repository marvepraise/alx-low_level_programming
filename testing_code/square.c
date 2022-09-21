#include<stdio.h>
#include"main.h"

// this code prints squres of numbers

int main()
{
	int x, result;
	printf("Please input a number: ");
	scanf("%i", &x);
	result = square(x);
	printf("the square of %i, is %i",&x,result);

	return 0;

}
