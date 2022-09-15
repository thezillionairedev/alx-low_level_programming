#include <stdio.h>

/**
 * main - Prints number
 *
 * Return: Buzz if number is 3 and Fizz if 5
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
