#include <stdio.h>

void execute_first(void)  __attribute__ ((constructor));

/**
 * execute_first - executes before main function
 * Return: none
 */

void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
