#include "3-calc.h"

/**
 * get_op_func - get the function associated to the @s operator
 * @s: operator
 * Return: function associeated to @s,
 * NULL if @s doesn't correspond to any operation
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
