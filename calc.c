#include "main.h"

void calc(Node *node)
{
    printf("%d\n", node->type);
    free(node);
}
