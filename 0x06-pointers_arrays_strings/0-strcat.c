#include "main.h"
/**
 *_strcat - will concatenate two strings
 *@destin: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: destin
 */

char *_strcat(char *destin, char *src)
{
int i, j;

i = 0;
while (destin[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
destin[i] = src[j];
j++;
i++;
}
destin[i] = '\0';

return (destin);
}
