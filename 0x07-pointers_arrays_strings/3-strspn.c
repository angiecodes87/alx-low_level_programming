#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char pointer
 *
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
	found = 0;
	for (char *a = accept; *a; a++)
	{
	if (*s == *a)
	{
	found = 1;
	break;
	}
	}
	if (!found)
	{
	break;
	}
	count++;
	s++;
	}

	return (count);
}

