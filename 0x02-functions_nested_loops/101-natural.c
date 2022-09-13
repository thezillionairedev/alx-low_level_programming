#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 || num % 5)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
