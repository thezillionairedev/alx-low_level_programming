#include "main.h"

/**
 * _islower - Checks for lowercae
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
