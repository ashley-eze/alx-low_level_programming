#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
int x, w;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (x = 0; n[x] != '\0'; x++)
{
for (w = 0; w < 10; w++)
{
if (n[x] == s1[w])
{
n[x] = s2[w];
}
}
}
return (n);
}
