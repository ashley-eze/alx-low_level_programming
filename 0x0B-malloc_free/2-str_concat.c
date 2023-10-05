#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one
 * @s2: input two
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = c = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[c] != '\0')
		c++;
	conct = malloc(sizeof(char) * (x + c + 1));

	if (conct == NULL)
		return (NULL);
	x = c = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}

	while (s2[c] != '\0')
	{
		conct[x] = s2[c];
		x++, c++;
	}
	conct[x] = '\0';
	return (conct);
}
