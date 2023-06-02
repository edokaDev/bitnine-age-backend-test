#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef enum types
{
    ADD,
    MUL,
    SUB
} TypeTag;
typedef struct Node
{
    TypeTag type;
} Node;
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
