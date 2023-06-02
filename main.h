#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * enum types - This defines the operation types
 * @ADD: addition
 * @MUL: multiplication
 * @SUB: subtraction
 *
 * Description: Defines the different types of operations
*/
typedef enum types
{
	ADD,
	MUL,
	SUB
} TypeTag;

/**
 * struct Node - this defines a Node.
 * @type: represents the type of a Node or the value of a Node.
 *
 * Description: Defines the representation of a Node.
*/
typedef struct Node
{
	TypeTag type;
} Node;

/**
 * struct operations - the maps an operation to a function
 * @type: the type of the operation
 * @func: the function handling that type
 *
 * Description: this struct joins each type to its handling function.
*/
typedef struct operations
{
	TypeTag type;
	void *(*func)(void *, void*);
} op_t;

void *(*makeFunc(TypeTag tag))(void *, void *);
void *add(void *, void *);
void *mul(void *, void *);
void *sub(void *, void *);
Node *fib(Node *n);
void calc(Node *node);

#endif /* MAIN_H */
