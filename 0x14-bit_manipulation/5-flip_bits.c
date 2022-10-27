#include "main.h"

/**
 * flip_bits - counts num of bits to be flipped
 * to get from one number to another
 * @n: number to be flipped
 * @m: number to flip to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = n ^ m, bits = 0;

	while (nbits > 0)
	{
		bits += (nbits & 1);
		nbits >> 1;
	}

	return (bits);
}
