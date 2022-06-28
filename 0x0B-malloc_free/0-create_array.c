#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -will create an array of chars
 * and initializes it with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of the memory to print
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *pray;
if (size == 0)
return (NULL);

/*The following will return a pointer to the allocated memory */
pray = malloc(size * sizeof(char));

if (pray == NULL)
return (NULL);

i = 0;
while (i < size)
{
pray[i] = c;
i++;
}
return (pray);
}
