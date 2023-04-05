#include <stdio.h>
/**
 * function _print_rev_recursion prints a string with recursion
 * 
 * No return
**/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
