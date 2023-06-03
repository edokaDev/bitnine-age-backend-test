#include <stdio.h>

/**
 * fib_rec - implements the function using recursion
 * @n: input
 *
 * Return: output
*/
unsigned int fib_rec(unsigned int n)
{
	if (n < 3)
		return (n);
	return (fib_rec(n - 3) + fib_rec(n - 2));
}

/**
 * fib_rec - implements the function using dynamic programming 
 * @n: input
 *
 * Return: output
*/
unsigned int fib_arr(unsigned int n)
{
	unsigned int i, f[n + 1];
	f[0] = 0;
	f[1] = 1;
	f[2] = 2;

	for (i = 3; i <= n; i++)
		f[i] = f[i - 3] + f[i - 2];
	
	return (f[n]);
}

/**
 * fib_rec - implements the function using using variable iterations
 * @n: input
 *
 * Return: output
*/
unsigned int fib_var(unsigned int n)
{
	unsigned int a, b, c, i, result;

	if (n < 3)
		return (n);
	a = 0, b = 1, c = 2;
	for (i = 3; i <= n; i++)
	{
		result = a + b;
		a = b;
		b = c;
		c = result;
	}
	return (result);
}

int main(void)
{
	printf("Using recursion: %d\n", fib_rec(4));
	printf("Using dynamic programming: %d\n", fib_arr(4));
	printf("Using variable iteration: %d\n", fib_var(4));

	return (0);
}