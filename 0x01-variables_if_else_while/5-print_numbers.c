#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description:This program prints single digit numbers of
 * base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
printf("%d", a);
}
printf("\n");

return (0);
}
