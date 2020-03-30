#include <stdio.h>

unsigned long int factorial(int);
int fibonacci_series(int);

unsigned long int factorial(int num)
{
	unsigned long int fact_num = 1;
	for(int index = num; index > 1; index--)
	{
		fact_num *= index;
	}
	return fact_num;
}

int fibonacci_series(int num)
{
	printf("Fibonacci series of %d is:\n", num);
	int previous_term = 0;
	int present_term = 1;
	int next_term;

for (int index = 0; index < num; index++) {
    present_term = previous_term + present_term;
    next_term = previous_term;
    previous_term = present_term;
    present_term = next_term;
		printf("%d\n", next_term);
  }

return 0;
}

int main(void)
{
	int number;
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("Factorial of %d is %lu\n", number, factorial(number));
	fibonacci_series(number);
}