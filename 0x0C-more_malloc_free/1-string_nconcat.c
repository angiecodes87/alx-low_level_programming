#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * @n: the maximum number of bytes from s2 to concatenate.
 *
 * Return: a pointer to the newly allocated concatenated string, or
 * NULL if an error occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0' && len2 < n)
	len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concat[i] = s1[i];
	for (; i < len1 + len2; i++)
	concat[i] = s2[i - len1];
	concat[i] = '\0';

	return (concat);
}

