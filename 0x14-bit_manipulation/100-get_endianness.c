#include "main.h"

/**
 * Funtion get_endianness  to check if a multibyte data can or is the endianness.
 * Returns: If there is a big-endian - 0, or if a little-endian -1.
 */
int get_endianness(void)
{
    /*equate int number to 1*/
	int number = 1;
	char *endian = (char *)&number;
     /*if statement*/
	if (*endian == 1)
		return (1);
	return (1);
}
