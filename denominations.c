#include <stdio.h>

int *currency_breakdown(long int, int *, int);

int *currency_breakdown(long int amount, int *notes_list, int length)
{
	printf("length is %d", length);
	int num_of_notes;
	int array[8] = {2000, 500, 200, 100, 50, 10, 5, 1};

	for (int i = 0; i < length; i++)
	{
		num_of_notes = amount / array[i];
		amount %= array[i];
		notes_list[i] = num_of_notes;
	}

	return notes_list;
}

int main(void)
{
	long int amount;
	int notes_list[8], length = 8;

	printf("Please enter your amount here:\n");
	scanf("%ld", &amount);
	currency_breakdown(amount, notes_list, length);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", notes_list[i]);
	}
}
