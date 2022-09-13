#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int sum;
	long int num1, num2;
	int count;

	sum = 0;
	count = 0;
	num1 = 0;
	num2 = 1;

	while (count < 49)
	{
		sum = num1 + num2;
		printf("%li, ", sum);
		num1 = num2;
		num2 = sum;

		count++;
	}
	sum = num1 + num2;
	printf("%li\n", sum);

	return (0);
}
