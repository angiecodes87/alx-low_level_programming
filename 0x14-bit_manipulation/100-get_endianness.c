#include "main.h"
/**
 * get_endianness - assigns return value to n
 * Return: 0 or 1 if succesful
 */



int get_endianness(void)
{
	int num = 1;
	char *endian_ptr = (char *)&num;

	if (*endian_ptr == 1)
	return (1);
	else
	return (0);
}

