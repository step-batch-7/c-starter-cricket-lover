#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
float average_of_three(int, int, int);
float simple_interest(int, int, int);
float convert_to_fahrenheit(int);
float convert_to_centigrade(int);

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

float simple_interest(int principle, int rate, int time)
{
	return (principle * time * rate) / 100.00;
}

float convert_to_fahrenheit(int centigrade)
{
	return (centigrade * 9/5.00) + 32;

}

float convert_to_centigrade(int fahrenheit)
{
	return (fahrenheit - 32) * 5/9;
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
	printf("temperature of %d degrees centigrade in fahrenheit is %f\n", number, convert_to_fahrenheit(number));
	printf("temperature of %d degrees fahrenheit in centigrade is %f\n", number, convert_to_centigrade(number));
	printf("enter three numbers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("Average of %d,%d,%d is %f\n", num1, num2, num3, average_of_three(num1,num2,num3));
	printf("Simple Interest of principle:%d, rate:%d, period:%d  is %f\n", num1, num2, num3, simple_interest(num1,num2,num3));
	return 0;
}