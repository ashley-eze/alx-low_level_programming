#include "main.h"
/**
 * _strchr - returns a pointer to first occurence in a string
 *Description - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
