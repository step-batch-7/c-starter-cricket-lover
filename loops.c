#include <stdio.h>

unsigned long int factorial(int);

unsigned long int factorial(int num)
{
	unsigned long int fact = 1;
	for(int index = num; index > 1; index--)
	{
		fact *= index;
	}
	return fact;
}

int main(void)
{
	int number;
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("factorial of %d is %lu\n", number, factorial(number));
}