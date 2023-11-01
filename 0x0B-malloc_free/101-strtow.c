#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len = 0;
	int word_count = count_words(str);

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ')
		str++;

		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
		len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
			free(words[k]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = *str++;

		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}

