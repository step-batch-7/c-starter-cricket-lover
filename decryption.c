#include <stdio.h>

int main(void)
{
	int a[] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
	int length = sizeof(a) / sizeof(int);

	for (int i = 0; i < length; i++)
	{
		a[i] = a[i] < 110 ? a[i] + 13 : a[i] - 13;
		printf("%c\n", a[i]);
	}
}
