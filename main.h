#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int add(int x, int y);
// int mul(int x, int y);
// int sub(int x, int y);

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
    // Node (*func)(Node *, Node*);
    int (*func)(int, int);
} op_t;
typedef struct ope
{
    TypeTag type;
    // Node (*func)(Node *, Node*);
    Node *(*func)(Node *, Node *);
} op_s;

typedef struct oper
{
    TypeTag type;
    // Node (*func)(Node *, Node*);
    Node *(*func)(int argcount, ...);
} op_v;

int (*makeFunc(TypeTag tag))(int x, int y);
Node *add_(Node *, Node *);
// Node *mul_(Node *, Node *);
// Node *sub_(Node *, Node *);
Node *(*myFunc(TypeTag tag))(Node *, Node *);

Node *(*myFuncV(TypeTag tag))(int argcount, ...);
Node *add__(int argcount, ...);

void calc(Node *node);

#endif /* MAIN_H */
