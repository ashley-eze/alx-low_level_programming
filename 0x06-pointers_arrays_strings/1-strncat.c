#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: destination
 * @src: source
 * @n: size of string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int Des, Source;

Des = 0;
Source = 0;

while (*(dest + Des) != '\0')
Des++;

while (*(src + Source) != '\0' && Des < 97 && Source < n)
{
*(dest + Des) = *(src + Source);
Des++;
Source++;
}
*(dest + Des) = '\0';
return (dest);
}
