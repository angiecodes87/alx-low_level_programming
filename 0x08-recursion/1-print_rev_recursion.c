#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If string is empty or null, return */
	if (*s == '\0')
	{
	return;
	}

	/* Call the function with the next character of the string */
	_print_rev_recursion(s + 1);

	/* Print the current character of the string */
	_putchar(*s);
}

