/**
*_memset -  function fills the first n bytes of the memory area
*Description- a function that fills memory with a constant byte.
*@s: pointer
*@b: constant byte
*@n: number of byte of memory area
*Return: array with new value for n bytes.
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
