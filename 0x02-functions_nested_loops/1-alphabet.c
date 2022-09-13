#include "main.h"

/**
 * main - Entry point
 *
 * Description - Prints lowercase alphabets with new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
