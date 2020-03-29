#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);

unsigned char is_even(int num)
{
	return num % 2 == 0;
}

unsigned char is_odd(int num)
{
	return !is_even(num);
}

int square(int num)
{
	return num * num;
}

int cube(int num)
{
	return num * square(num);
}

int main(void)
{
	int number;
	printf("please enter a number:\n");
	scanf("%d", &number);
	printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
	printf("%d is %s\n", number, is_odd(number) ? "odd" : "not odd");
	printf("square of %d is %d\n", number, square(number));
	printf("cube of %d is %d\n", number, cube(number));
}