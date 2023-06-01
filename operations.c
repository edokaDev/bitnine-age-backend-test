#include "main.h"

int add(int x, int y)
{
    return (x + y);
}


Node *add_(Node *x, Node *y)
{
    Node *result = malloc(sizeof(Node));
    result->type = x->type + y->type;
    free(x);
    free(y);
    return (result);
}

Node *add__(int argcount, ...)
{
    va_list ap;
    va_start(ap, argcount);

    Node *a = va_arg(ap, Node *);
    Node *b = va_arg(ap, Node *);
    va_end(ap);

    Node *result = malloc(sizeof(Node));
    result->type = b->type;

    return result;

}

// Node *mul(Node *x, Node *y)
// {
//     return (x * y);
// }

// Node *sub(Node *x, Node *y)
// {
//     return (x - y);
// }

