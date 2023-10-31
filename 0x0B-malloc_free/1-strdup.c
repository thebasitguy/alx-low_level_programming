#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string that is duplicated
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i = 0;
	int len = 0;

	if (str == NULL)

		return (NULL);

	while (str[i] != '\0')

		i++;

	str_copy = malloc(sizeof(char) * (i + 1));

	if (str_copy == NULL)

		return (NULL);

	for (len = 0; str[len]; len++)

		str_copy[len] = str[len];

	return (str_copy);

}

