#include "main.h"


int (*makeFunc(TypeTag tag))(int x, int y)
{
    op_t ops[] = {
        {ADD, add},
        // {MUL, mul},
        // {SUB, sub},
        {0, NULL}
    };
    int i = 0;

    while ((ops + i)->func != NULL)
    {
        if ((ops + i)->type == tag)
            return ((ops + i)->func);
        i++;
    }

    return (NULL);
}

Node *(*myFunc(TypeTag tag))(Node *, Node *)
{
    op_s ops[] = {
        {ADD, add_},
        // {MUL, mul_},
        // {SUB, sub_},
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

Node *(*myFuncV(TypeTag tag))(int argcount, ...)
{
    op_v ops[] = {
        {ADD, add__},
        // {MUL, mul_},
        // {SUB, sub_},
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