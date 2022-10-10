#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}