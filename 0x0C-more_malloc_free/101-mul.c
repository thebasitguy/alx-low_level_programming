#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* helper functions */
#define _atoi(c) (c - '0')
#define _itoa(i) ((i % 10) + '0')
#define isdigit(c) ((c >= '0' && c <= '9') ? 1 : 0)

void *_memset(void *s, int c, unsigned int n);
void print_err_msg(void);
unsigned int _strlen(const char *s);

/**
 * main - multiplies two numbers provided as command line arguments.
 * @argc: the number of command line arguments.
 * @argv: an array containing the command line arguments. Exactly two
 * arguments are required.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *op1, *op2;
	int op1_len, op2_len, result_len;
	int start, product, carry, i, j;
	char *result;

	if (argc != 3)
		print_err_msg();

	op1 = argv[1];
	op2 = argv[2];

	op1_len = _strlen(op1);
	op2_len = _strlen(op2);

	result_len = op1_len + op2_len;

	result = malloc(sizeof(char) * (result_len + 1));

	if (result == NULL)
		print_err_msg();

	_memset(result, '0', result_len);
	result[result_len] = '\0';

	for (i = op1_len - 1; i >= 0; i--)
	{
		for (j = op2_len - 1; j >= 0; j--)
		{
			if (!isdigit(op1[i]) && !isdigit(op2[j]))
			{
				free(result);
				print_err_msg();
			}

			product = _atoi(op1[i]) * _atoi(op2[j]);
			carry = _atoi(result[i + j + 1]) + product;

			result[i + j + 1] = _itoa(carry);
			result[i + j] = (_atoi(result[i + j]) + _itoa(carry / 10));
		}
	}

	start = 0;
	while (start < result_len && result[start] == '0')
		start++;

	if (start == result_len)
		puts("0");
	else
		printf("%s\n", result + start);

	free(result);

	return (0);
}

/**
 * print_err_msg - print error and exit with status code 98
 */

void print_err_msg(void)
{
	puts("Error");
	exit(98);
}

/**
 * _strlen - get the length of a string
 * @s: string
 *
 * Return: length of string @s
 */

unsigned int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
 * _memset - fill memory with constant byte
 * @s: string buffer
 * @c: byte to write
 * @n: number of bytes to write
 *
 * Return: a pointer to memory area @s
 */

void *_memset(void *s, int c, unsigned int n)
{
	unsigned int i;
	char *tmp = (char *) s;

	for (i = 0; i < n; i++)
		tmp[i] = c;
	return (s);
}

