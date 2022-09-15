#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if charatcer is uppercase, 0 if lowercase
 */
int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
