#include "main.h"
/**
 * _isdigit - check for number
 * @c: input number
 * Return: 1 if a number, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
