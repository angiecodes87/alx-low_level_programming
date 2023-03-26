#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string to be measured.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If string is empty or null, return 0 */
	if (*s == '\0')
	{
	return (0);
	}

	/* Call the function with the next character of the string */
	return (_strlen_recursion(s + 1) + 1);
}

