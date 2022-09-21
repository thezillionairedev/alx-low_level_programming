#include "main.h"

/**
 * _strncat - concatenates two strings but use number of bytes inputted
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer to be compared
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
