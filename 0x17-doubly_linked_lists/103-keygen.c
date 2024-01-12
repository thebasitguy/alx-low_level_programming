#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @username: username
 * @len: length of username
 *
 * Return: the biggest number
 */

int f4(char *username, int len)
{
	int current_char;
	int max_char;
	unsigned int random_num;

	current_char = *username;
	max_char = 0;

	while (max_char < len)
	{
		if (current_char < username[max_char])
			current_char = username[max_char];
		max_char += 1;
	}

	srand(current_char ^ 14);
	random_num = rand();

	return (random_num & 63);
}

/**
 * f5 - multiplies each char of username
 * @username: username
 * @len: length of username
 *
 * Return: multiplied char
 */

int f5(char *username, int len)
{
	int current_char;
	int max_char;

	current_char = max_char = 0;

	while (max_char < len)
	{
		current_char = current_char + username[max_char] * username[max_char];
		max_char += 1;
	}

	return (((unsigned int)current_char ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @username: username
 *
 * Return: a random char
 */

int f6(char *username)
{
	int current_char;
	int max_char;

	current_char = max_char = 0;

	while (max_char < *username)
	{
		current_char = rand();
		max_char += 1;
	}

	return (((unsigned int)current_char ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int len, current_char, max_char;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	current_char = max_char = 0;
	while (max_char < len)
	{
		current_char = current_char + argv[1][max_char];
		max_char = max_char + 1;
	}
	keygen[1] = ((char *)alph)[(current_char ^ 79) & 63];
	/* ----------- f3 ----------- */
	current_char = 1;
	max_char = 0;
	while (max_char < len)
	{
		current_char = argv[1][max_char] * current_char;
		max_char = max_char + 1;
	}
	keygen[2] = ((char *)alph)[(current_char ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (current_char = 0; keygen[current_char]; current_char++)
		printf("%c", keygen[current_char]);
	return (0);
}
