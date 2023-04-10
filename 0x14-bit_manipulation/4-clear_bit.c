#include "main.h"

/**
 * Funtion for Clearing a bit to 0. This is at a given index
 * @n: The number
 * Return: 1 if when successful, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;
      /*if statement*/
	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);
/*We use () to nest the left shifting operator because of Not bitwise operator which is an unary operator*/

	*n = *n & num;

	return (1);

}
