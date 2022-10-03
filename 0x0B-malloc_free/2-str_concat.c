#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(const char *s);

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to the first string
 *
 * @s2: pointer to the second string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)

{

	int i = 0, j = 0;

	char *deliver;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	i = _strlen(s1);
	j = _strlen(s2);
	deliver = malloc((i + j) * sizeof(*s1) + 1);
	if (deliver == 0)
		return (NULL);
	strcat(deliver, s1);
	strcat(deliver, s2);
	return (deliver);
}

/**
 * _strlen - gets the length of a string
 *
 * @s: the string of which length is required
 *
 * Return: length of the string
 */

int _strlen(const char *s)

{

	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
