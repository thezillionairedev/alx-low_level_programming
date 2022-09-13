#include "main.h"

/**
 * main - Entry point
 *
 * Description - Prints lowercase alphabets with new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
