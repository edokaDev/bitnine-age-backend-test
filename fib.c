#include "main.h"

Node *fib(Node *n)
{
    Node *a = malloc(sizeof(Node));
    int nn = n->type;
    if (nn < 0)
        nn = -nn;
    int fibo[nn];
    int i;

    fibo[0] = 0;
    fibo[1] = 1;

    for (i = 2; i < nn; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];

    a->type = fibo[nn - 1];
    return (a);
}
