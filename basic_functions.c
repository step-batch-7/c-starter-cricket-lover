#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num)
{
	return num%2 == 0;
}

int main(void)
{
	int number;
	printf("please enter a number:\n");
	scanf("%d", &number);
	printf("%d is %s\n", number,is_even(number) ? "even" : "not even");
}