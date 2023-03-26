#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/* Base case: If string is empty or null, print a new line and return */
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	/* Print the first character of the string */
	_putchar(*s);

	/* Call the function recursively with the next character of the string */
	_puts_recursion(s + 1);
}


