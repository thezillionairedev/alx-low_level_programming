#include "main.h"

/**
 * main - Entry point
 *
 * Description - Prints 10 times the alphabet
 *
 * Return: ALways 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <=9; i++)
	{
		for (j = 'a'; j = 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
