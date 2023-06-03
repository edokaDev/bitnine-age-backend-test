#include "main.h"

/**
 * calc - fuction that prints the value of a Node and frees it.
 * @node: pointer to node to print/free.
 *
 * Return: void
*/
void calc(Node *node)
{
	printf("%d\n", node->type);
	free(node);
}
