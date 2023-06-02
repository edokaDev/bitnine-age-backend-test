#include "main.h"

/**
 * fib - a fibonacci function based on Dynamic programming
 * @n: pointer to node whose type (value)
 * the function calculates based on
 *
 * Return: a node whose type (value)
 * contains the calculated fibonacci value.
*/
Node *fib(Node *n)
{
	Node *a = malloc(sizeof(Node));
	int nn = n->type;
	int fibo[nn];
	int i;

	if (nn < 0)
		nn = -nn;

	fibo[0] = 0;
	fibo[1] = 1;

	for (i = 2; i < nn; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	a->type = fibo[nn - 1];

	return (a);
}
