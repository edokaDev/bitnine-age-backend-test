#include "main.h"

int main(void)
{
	int d;
	Node *f, *a, *b, *g;
    a = malloc(sizeof(Node));
    a->type = 10;
    b = malloc(sizeof(Node));
    b->type = 7;
	d = (*makeFunc)(ADD)(10,6);
	f = (*myFunc)(ADD)(a,b);
	g = (*myFuncV)(ADD)(2, a, b);
	// Node *add = (*makeFunc(ADD))(10, 6);
	// Node *mul = (*makeFunc(MUL))(5, 4);
	// Node *sub = (*makeFunc(SUB))(mul, add);
	// Node *fibo = (*makeFunc(SUB))(sub, NULL);
	// calc(add);
	// calc(mul);
	// calc(sub);
	// calc(fibo);
	printf("%d\n", d);
	calc(f);
	calc(g);

	return (0);
}
