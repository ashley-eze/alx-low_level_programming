#include "main.h"

/**
 * _strcat - Concatenates 2 strings.
 * @dest: Destination.
 * @src: Source.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
int Des, Source;

Des = 0;
Source = 0;

while (*(dest + Des) != '\0')
Des++;

while (*(src + Source) != '\0' && Des < 97)
{
*(dest + Des) = *(src + Source);
Des++;
Source++;
}
*(dest + Des) = '\0';
return (dest);
}
