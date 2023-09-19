#include "main.h"
/**
* _strcpy - copies a string including the null byte to a buffer
* @dest: destination buffer
* @src: source string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (p);
}
