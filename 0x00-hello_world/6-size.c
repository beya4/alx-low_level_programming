#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char a_char;
  int an_int;
  long a_long_int;
  long long a_long_long_int;
  float a_float;

  printf("Size of a char: %lu byte(s)\n", sizeof(a_char));
  printf("Size of an int: %lu byte(s)\n", sizeof(an_int));
  printf("Size of a long int: %lu byte(s)\n", sizeof(a_long));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(a_long_long_int));
  printf("Size of a float: %lu byte(s)\n", sizeof(a_float));

  return (0);
}
