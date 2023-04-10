#include <stdio.h>
#include "main.h"

/**
 * This funtion will convert the unsigned int to a binary
 * @n: Represent the unsigned int
 * Returns: binary
 */
void print_binary(unsigned long int n)
void print_binary(unsigned long int n)
{
/*declare*/
	if (n > 1)
		/*The right shift operator to direct all bits toward the right by a certain number 1 bit*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
