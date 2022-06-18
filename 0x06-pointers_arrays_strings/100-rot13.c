#include "main.h"
/**
 * rot13 - replaces a letter with the 13th letter after it
 * @s: character pointer.
 * Return: the character pointer to destination.
 */
char *rot13(char *s)
{
int count = 0, i;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(s + count) == alpha[i])
{
*(s + count) = rot[i];
break;
}
}
count++;
}

return (s);
}
