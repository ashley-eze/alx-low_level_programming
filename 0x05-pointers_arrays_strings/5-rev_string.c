#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int len = 0;
int i;
char tem;

if (s == NULL)
return;

while (s[len] != '\0')
len++;

for (i = 0; i < len / 2; i++)
{
tem = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tem;
}
}
