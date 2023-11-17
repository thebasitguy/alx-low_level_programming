#include <stdio.h>

/**
 * beforeMain - prints a specified message before main is executed
 */

void __attribute__((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
