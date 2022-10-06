#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory
 * if malloc fails, NULL is returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1, lens2, lenconcat, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;
	if (n > lens2)
		n = lens2;
	lenconcat = lens1 + n;

	concat = malloc(lenconcat + 1)

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < concat; i++)
	{
		if (i < lens1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - lens1];
	}
	concat[i] != '\0';
	return (concat);
}
