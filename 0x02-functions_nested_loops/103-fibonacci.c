#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int num1, num2, sum, total;

	num1 = 0;
	num2 = 1;
	sum = 0;
	total = 0;

	while (sum < 40000000)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		num1 = num2;
		num2 = sum;
	}
	printf("%li\n", total);

	return (0);
}
