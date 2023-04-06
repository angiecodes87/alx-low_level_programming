#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = 1;
	int i, bit;

	while ((n / divisor) >= 2)
		divisor *= 2;

	for (i = 0; divisor > 0; i++, divisor /= 2)
	{
		bit = (n / divisor) % 2;
		_putchar(bit + '0');
	}
}

