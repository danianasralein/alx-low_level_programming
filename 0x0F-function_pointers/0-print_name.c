#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
