#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s[i]);
	if (c == '\0')
		return (s[i]);
	return (NULL);
}
