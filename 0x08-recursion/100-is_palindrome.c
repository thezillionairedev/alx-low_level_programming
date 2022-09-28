#include "main.h"

/**
 * str_length - returns length of string
 * @s: string
 * Return: the length of a string
 */
int str_length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	else
		return (0);
}
/**
 * compare - compares each character of the string
 * @s: string
 * @start: start index
 * @end: end index
 * Return: i if match or 0 no match
 */
int compare(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	else if (start == end && s[start] == s[end])
		return (1);
	else if (start == end - 1 && s[start] == s[end])
		return (1);
	else
		return (compare(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks is string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len, start, end;

	len = length(s);
	start = 0;
	end = len - 1;

	if (len == 0 || len == 1)
		return (1);
	else
		return (compare(s, start, end));
}
