#include "main.h"

void *add(void *x, void *y)
{
    Node *a = (Node *)x;
    if (y == NULL)
        return (fib(x));
    Node *b = (Node *)y;
    Node *result = malloc(sizeof(Node));
    result->type = a->type + b->type;
    return (result);
}

void *mul(void *x, void *y)
{
    Node *a = (Node *)x;
    if (y == NULL)
        return (fib(x));
    Node *b = (Node *)y;
    Node *result = malloc(sizeof(Node));
    result->type = a->type * b->type;
    return (result);
}

void *sub(void *x, void *y)
{
    Node *a = (Node *)x;
    if (y == NULL)
        return (fib(x));
    Node *b = (Node *)y;
    Node *result = malloc(sizeof(Node));
    result->type = a->type - b->type;
    return (result);
}
