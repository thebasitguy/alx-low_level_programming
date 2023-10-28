#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive integers
 *
 * @argc: number of argument
 * @argv: array of argguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		arg = argv[i];

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum); /* print sum */

	return (0);
}
