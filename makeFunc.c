#include "main.h"

/**
 * makeFunc - a function that maps an input operation to its function
 * @tag: specifies the type of operation
 *
 * Return: on success, the operation fuction is returned
 * or NULL on failure.
*/
void *(*makeFunc(TypeTag tag))(void *x, void *y)
{
	op_t ops[] = {
		{ADD, add},
		{MUL, mul},
		{SUB, sub},
		{0, NULL}
	};
	unsigned int i = 0;

	while (*(ops + i)->func != NULL)
	{
		if ((ops + i)->type == tag)
			return (*(ops + i)->func);
		i++;
	}
	return (NULL);
}
