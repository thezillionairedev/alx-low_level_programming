#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		_putchar(-1 + '0');
		return (-1);
	}
	else
	{
		_putchar(1 + '0');
		return (1);
	}
}
