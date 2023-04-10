#include "main.h"

/**
 * Funtion to set bit to a 1 at an index
 * @n: The number
 * Returns: 1 if successful, or -1 if there's error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;
     /*use if*/
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
     /*This will shift the value set to left by 1 bit. num = num << index*/
	num <<= index;
     /*We use a bitwise operator OR*/
	*n = *n | num;
	return (1);
}
