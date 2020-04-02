#include <stdio.h>

int currency_breakdown(long int);
int print_denomination(long int, int);

int print_denomination(long int amount, int denomination)
{
	int num_of_notes = amount / denomination;
	printf("%d x Rs %d\n", num_of_notes, denomination);
	return 0;
}

int currency_breakdown(long int amount)
{

	print_denomination(amount, 2000);
	amount = amount % 2000;

	print_denomination(amount, 500);
	amount = amount % 500;

	print_denomination(amount, 200);
	amount = amount % 200;

	print_denomination(amount, 100);
	amount = amount % 100;

	print_denomination(amount, 50);
	amount = amount % 50;

	print_denomination(amount, 10);
	amount = amount % 10;

	print_denomination(amount, 5);
	amount = amount % 5;

	print_denomination(amount, 1);
	return 0;
}

int main(void)
{
	long int amount;
	printf("Please enter your amount here:\n");
	scanf("%ld", &amount);
	currency_breakdown(amount);
}