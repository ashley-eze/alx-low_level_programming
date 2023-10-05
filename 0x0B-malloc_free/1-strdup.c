#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- duplicates a string.
 *@str: character
 *Return: 0
 */
char *_strdup(char *str)
{
	char *thing;
	int x, y = 0;

if (str == NULL)
	return (NULL);
x = 0;
while (str[x] != '\0')
	x++;
thing = malloc(sizeof(char) * (x + 1));

if (thing == NULL)
	return (NULL);

for  (y = 0; str[y]; y++)
	thing[y] = str[y];

return (thing);
}
