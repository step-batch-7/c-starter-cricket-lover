#include <stdio.h>

unsigned long int get_factorial(int);
int print_fibonacci_series(int);
unsigned char is_even(int);
int print_odd_series(int);
int print_even_series(int);
int print_multiplication_table(int, int);
long int get_sum_of_n(int, int);
long int get_product_of_n(int, int);

unsigned long int get_factorial(int num)
{
	unsigned long int fact_num = 1;
	for(int index = num; index > 1; index--)
	{
		fact_num *= index;
	}
	return fact_num;
}

int print_fibonacci_series(int num)
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

unsigned char is_even(int num)
{
	return num % 2 == 0;
}

int print_odd_series(int num)
{
	printf("Even number series for %d is:\n", num);
	for(int index = 1; index <= num; index++)
	{
		is_even(index) || printf("%d\n", index);
	}
	return 0;
}

int print_even_series(int num)
{
	printf("Odd number series for %d is:\n", num);
	for(int index = 1; index <= num; index++)
	{
		is_even(index) && printf("%d\n", index);
	}
	return 0;
}

int print_multiplication_table(int num1, int num2)
{
	int product_value;
	printf("Multiplication table of %d upto %d is:\n", num1, num2);
	for(int index = 1; index <= num2; index++)
	{
		product_value = num1 * index;
		printf("%d * %d = %d\n", num1, index, product_value);
	}
	return 0;
}

long int get_sum_of_n(int start, int end)
{
	int total = 0;
	for(int index = start; index <= end; index++)
	{
		total += index;
	}
	return total;
}

long int get_product_of_n(int start, int end)
{
	int total = 1;
	for(int index = start; index <= end; index++)
	{
		total *= index;
	}
	return total;
}

int main(void)
{
	int number;
	int num1, num2;
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("Factorial of %d is %lu\n", number, get_factorial(number));
	print_fibonacci_series(number);
	print_odd_series(number);
	print_even_series(number);
	printf("Please enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	print_multiplication_table(num1, num2);
	printf("Sum of numbers between %d and %d is %ld\n", num1, num2, get_sum_of_n(num1, num2));
	printf("Product of numbers between %d and %d is %ld\n", num1, num2, get_product_of_n(num1, num2));
	return 0;
}