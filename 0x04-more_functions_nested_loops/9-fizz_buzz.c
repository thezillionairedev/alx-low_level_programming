#include <stdio.h>

/**
 * main - Prints number
 *
 * Return: Buzz if number is 3 and Fizz if 5
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz\n ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz\n ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n ");
		}
		else
		{
			printf("%d\n ", n);
		}
	}
	return (0);
}
