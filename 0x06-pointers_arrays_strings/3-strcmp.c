#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: The difference between the ASCII values of the first
 *         differing characters of s1 and s2, or 0 if they are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
	i++;
	}

	return (s1[i] - s2[i]);
}

