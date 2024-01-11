#include "main.h"
/**
 * _print_rev_recursion - puts a string to stdout in reverse
 *
 * @s: string that will be put to stdout
 *
 * Return: always return void
 */
void _print_rev_recursion(char *s)
{
	if (!*s) /* if s points to null char */
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
