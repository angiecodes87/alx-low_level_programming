#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: On success, a pointer to the duplicated string. NULL if insufficient
 * memory was available or str is NULL.
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
	return (NULL);

	len = strlen(str) + 1;
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
	return (NULL);

	memcpy(new_str, str, len);
	return (new_str);
}

