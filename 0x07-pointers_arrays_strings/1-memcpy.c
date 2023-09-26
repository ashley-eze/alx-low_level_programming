#include "main.h"
/**
*_memcpy - function copies memory area
*@dest: destination
*@src: source
*@n: number of bytes
*return: copied memory with changed n bytes.
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
