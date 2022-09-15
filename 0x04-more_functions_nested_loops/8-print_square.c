#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int x;

	if (size <= 2)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
