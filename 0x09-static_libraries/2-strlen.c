#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
int l = 0;

while (s[l] != '\0')
{
l++;
}

return (l);
}
