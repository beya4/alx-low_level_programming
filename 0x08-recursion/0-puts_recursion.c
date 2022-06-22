#include "main.h"

/**
 * _puts_recursion - will print a string followed by a new line
 * @s: char pointer
 * Return:Void returns nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');

return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
