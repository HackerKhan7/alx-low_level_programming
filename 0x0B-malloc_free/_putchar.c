#include "main.h"
#include <uninstd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and is set appropriately.
 */
{
	return (write(1, &c, 1));
}
