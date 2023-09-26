#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 *Description- a function that searches a string for any of a set of bytes.
 * @s: first occurence of string
 * @accept: string
 * Return: 0 on Success.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

		return (0);
}
