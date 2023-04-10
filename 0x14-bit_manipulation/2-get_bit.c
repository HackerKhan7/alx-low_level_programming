#include "main.h"

/**
 * This funtion will get a bit at an index
 * @index: This is the index that is within a binary number
 * @n: integer number
 * Returns: bit 0 or 1, or else -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
