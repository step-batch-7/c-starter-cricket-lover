#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
float average_of_three(int, int, int);

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

float average_of_three(int num1, int num2, int num3)
{
	return (num1 + num2 + num3) / 3.00;
}

int main(void)
{
	int number;
	int num1, num2, num3;
	printf("please enter a number:\n");
	scanf("%d", &number);
	printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
	printf("%d is %s\n", number, is_odd(number) ? "odd" : "not odd");
	printf("square of %d is %d\n", number, square(number));
	printf("cube of %d is %d\n", number, cube(number));
	printf("enter three numbers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("Average of %d,%d,%d is %f\n", num1, num2, num3, average_of_three(num1,num2,num3));
	return 0;
}