#include "variadic_functions.h"
/**
 * sum_them_all - function that sum of all its parameters
 *
 * @n: How many variables will be inserted in the function
 *
 * Return: return the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		s += x;
	}
	va_end(args);

	return (s);
}
