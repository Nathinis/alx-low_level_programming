#include "main.h"
/**
 * _print_rev_recursion - It prints the string in reverse.
 * @s
 */
void _print_rev_recursion(char *s)
{
        if (*s)
        {
                _print_rev_recursion(s + 1);
                _putchar(*s);
        }
}
