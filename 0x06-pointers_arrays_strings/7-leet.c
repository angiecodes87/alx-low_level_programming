
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == letters[j])
	{
	str[i] = leet[j % 5];
	break;
	}
	}
	}
	return (str);
}


