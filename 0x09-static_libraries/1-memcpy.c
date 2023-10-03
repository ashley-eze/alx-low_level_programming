#include "main.h"
/**
*_memcpy - function copies n byte memory area
*Description- a function that copies memory area
*@dest: destination
*@src: source
*@n: number of bytes
*Return: copied memory with changed n bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x = 0;
int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
