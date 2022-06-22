#include "main.h"
/**
 * factorial -will calculate the factorial of a number.
 * @n: the digit
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n ==  0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
