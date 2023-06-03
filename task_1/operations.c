#include "main.h"

/**
 * add - add the type (value) of two nodes
 * @x: pointer to first node
 * @y: pointer to second node
 *
 * Return: the result of the operation
*/
void *add(void *x, void *y)
{
	Node *a = (Node *)x, *b, *result;

	if (y == NULL)
		return (fib(x));
	b = (Node *)y;
	result = malloc(sizeof(Node));
	result->type = a->type + b->type;
	return (result);
}

/**
 * mul - multiplies the type (value) of two nodes
 * @x: pointer to first node
 * @y: pointer to second node
 *
 * Return: the result of the operation
*/
void *mul(void *x, void *y)
{
	Node *a = (Node *)x, *b, *result;

	if (y == NULL)
		return (fib(x));
	b = (Node *)y;
	result = malloc(sizeof(Node));
	result->type = a->type * b->type;
	return (result);
}

/**
 * sub - subtracts the type (value) of the first nodes from the second
 * @x: pointer to first node
 * @y: pointer to second node
 *
 * Return: the result of the operation
*/

void *sub(void *x, void *y)
{
	Node *a = (Node *)x, *b, *result;

	if (y == NULL)
		return (fib(x));
	b = (Node *)y;
	result = malloc(sizeof(Node));
	result->type = a->type - b->type;
	return (result);
}
