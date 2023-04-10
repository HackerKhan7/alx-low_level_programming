#include "main.h"

/**
 * Funtion to flip bits to Count number of bits that are needed to be flipped in order to get from one number to a certain other number.
 * @m: This will represent number to which n will be flipped to
 * @n: Number to flip.
 * Returns:The number of bits that to flip in order to get from i.e n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, bits = 0;
      /*difference*/
	diff = n ^ m;
      /*use while*/
	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}

	return (bits);
}
