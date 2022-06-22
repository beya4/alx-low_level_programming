#include "main.h"
/**
 * wildcmp - will compare two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
if (!*s2)
return (*s1 == '\0');

if (*s1 != '\0' && *s2 == '*')
return (wildcmp(s1 + 1, s2));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
if (*s1 == '\0')
return (1);
if (*s1 == *s2 && *s1 != '\0')
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
