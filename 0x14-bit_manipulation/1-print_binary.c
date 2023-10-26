#include "main.h"
/**
 * print_binary - function that prints the binary system of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
int binary_number ;

if (n >> 1)
print_binary(n >> 1);

binary_number = n & 1;
putchar(binary_number + '0');
}
