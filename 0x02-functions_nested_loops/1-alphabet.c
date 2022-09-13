#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets with new line
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
