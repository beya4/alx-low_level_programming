#include "main.h"
/**
 * print_number - to print an integer.
 * @n: the input integer.
 * Return: void has no return.
 */

void print_number(int n)
{
unsigned int met, den, count;
if (n < 0)
{
_putchar(45);
met = n * -1;
}
else
{
met = n;
}
den = met;
count = 1;

while (den > 9)
{
den /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((met / count) % 10) + 48);
}
}
