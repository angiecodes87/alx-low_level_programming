#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	/* capitalize first letter of each word */
	if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n'
	|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
	|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
	|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
	|| str[i - 1] == '}')
	{
	str[i] = toupper(str[i]);
	}
	i++;
	}
	return (str);
}

