#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0;
*/
int main(void)
{
	int a = 10, b = 6, c = 5, d = 4;
	Node *add = (*makeFunc(ADD))(&a, &b);
	Node *mul = (*makeFunc(MUL))(&c, &d);
	Node *sub = (*makeFunc(SUB))(add, mul);
	Node *fibo = (*makeFunc(SUB))(sub, NULL);

	calc(add);
	calc(mul);
	calc(sub);
	calc(fibo);

	return (0);
}
