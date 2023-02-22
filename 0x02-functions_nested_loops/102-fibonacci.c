#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers starting with 1 and 2,
 * followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibi = 0, fibj = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibi + fibj;
		printf("%lu", sum);

		fibi = fibj;
		fibj = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
