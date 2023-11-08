#include "function_pointers.h"
/**
 *print_name - prints a name
 * trough pointer function
*/
void print_name(char *name, void (*f)(char *))
{
        if(*name == NULL || *f(name) == NULL)
		return;
	f(char *name);
}
