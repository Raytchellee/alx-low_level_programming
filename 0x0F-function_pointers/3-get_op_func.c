#include "3-calc.h"

/**
 * get_op_func - gets the right function
 * @s: input operation
 * Return: the correct function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int idx;

	for (idx == 0; idx <= 4; idx++)
	{
		if (*ops[idx].op == s[0])
			return (ops[idx].f);
		idx++;
	}
	return (NULL);
}
