#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int gcd(int, int);
int lcm(int, int);
float convert_to_fahrenheit(int);
float convert_to_centigrade(int);
float average_of_three(int, int, int);
float simple_interest(int, int, int);
float compound_interest(int, int, int);
int greater_of_two(int, int);
int greatest_of_three(int, int, int);

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

int gcd(int num1, int num2)
{
	int remainder;
	while(num1 > 0)
	{
		remainder = num2%num1;
		num2 = num1;
		num1 = remainder;
	}
	return num2;
}

int lcm(int num1, int num2)
{
	return (num1 * num2) / gcd(num1, num2);
}

float convert_to_fahrenheit(int centigrade)
{
	return (centigrade * 9/5.00) + 32;
}

float convert_to_centigrade(int fahrenheit)
{
	return (fahrenheit - 32) * 5/9;
}

float average_of_three(int num1, int num2, int num3)
{
	return (num1 + num2 + num3) / 3.00;
}

int greater_of_two(int num1, int num2)
{
	return num1>num2 ? num1 :num2;
}

int greatest_of_three(int num1, int num2, int num3)
{
	return greater_of_two(greater_of_two(num1, num2), num3);
}

float simple_interest(int principle, int rate, int time)
{
	return (principle * time * rate) / 100.00;
}

float compound_interest(int principle, int rate, int time)
{
	return (principle * pow(1+rate/100.00, time)) - principle;
}

int main(void)
{
	int number;
	int num1, num2, num3;
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("%d is %s\n", number, is_even(number) ? "even" : "not even");
	printf("%d is %s\n", number, is_odd(number) ? "odd" : "not odd");
	printf("Square of %d is %d\n", number, square(number));
	printf("Cube of %d is %d\n", number, cube(number));
	printf("Temperature of %d degrees centigrade in fahrenheit is %f\n", number, convert_to_fahrenheit(number));
	printf("Temperature of %d degrees fahrenheit in centigrade is %f\n", number, convert_to_centigrade(number));
	printf("Please enter three numbers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("Average of %d,%d,%d is %f\n", num1, num2, num3, average_of_three(num1,num2,num3));
	printf("Greatest of %d, %d, %d is %d\n", num1, num2, num3, greatest_of_three(num1, num2, num3));
	printf("Simple Interest of principle:%d, rate:%d, period:%d  is %f\n", num1, num2, num3, simple_interest(num1,num2,num3));
	printf("Compound Interest of principle:%d, rate:%d, period:%d  is %f\n", num1, num2, num3, compound_interest(num1,num2,num3));
	printf("Please enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	printf("GCD of %d, %d is %d\n", num1, num2, gcd(num1, num2));
	printf("LCM of %d, %d is %d\n", num1, num2, lcm(num1, num2));
	return 0;
}