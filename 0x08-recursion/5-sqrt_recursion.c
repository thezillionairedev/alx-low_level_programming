#include "main.h"

/**
 * check_int - returns the natural square root of a number.
 * @n: input number
 * @i: iterator
 * Return: square root or -1
 */
int check_int(int n, int i)
{
	int square = i * 1;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (check_int(n, i + 1));
}
 /**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (check_int(n, 1));
}
