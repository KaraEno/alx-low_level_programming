#include <stdio.h>
/**
* print_name - print name
* @name: name to be printed
* @f: pointer to the function that print name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
