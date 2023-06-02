#include "main.h"


void *(*makeFunc(TypeTag tag))(void *x, void *y)
{
    op_t ops[] = {
        {ADD, add},
        {MUL, mul},
        {SUB, sub},
        {0, NULL}
    };
    unsigned int i = 0;

    while (*(ops + i)->func != NULL)
    {
        if ((ops + i)->type == tag)
            return (*(ops + i)->func);
        i++;
    }
    return (NULL);
}

