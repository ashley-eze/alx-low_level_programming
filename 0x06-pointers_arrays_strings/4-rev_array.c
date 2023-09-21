/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int x, p;

	for (x = 0; x < n--; x++)
	{
	p = a[x];
	a[x] = a[n];
	a[n] = p;
	}
}
