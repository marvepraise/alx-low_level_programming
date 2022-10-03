#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char
 *
 * @size: size of the array
 *
 * @arr: character
 *
 * Return: pointer to the array or null if fails
 */

char *create_array(unsigned int size, char arr)
{

	char *array_value = malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0 || array_value == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_value[i] = arr;

	return (array_value);
}
