#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description:this program prints lowercase alphabets except e && q
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
