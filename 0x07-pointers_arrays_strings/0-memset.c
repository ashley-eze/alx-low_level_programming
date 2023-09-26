/**
* _memset - fill a block of memory with a specific value
* @s: pointer
* @b: constant byte
* @n: number of byte of memory area
* Return- array with new value for n bytes.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);
}
