#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * linear search
 * @array: Pointer to the array of integers
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	return (-1);

	for (index = 0; index < size; index++)
	{
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	if (array[index] == value)
	return (index);
	}

	return (-1);
}

