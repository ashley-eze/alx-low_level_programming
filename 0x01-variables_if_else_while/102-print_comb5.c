#include <stdio.h>

/**
*main - Prints all possible combinations of two two-digit numbers
*
* Return: Always 0
*/
int main(void)
{
int n1, n2;

for (n1 = 0; n1 <= 99; n1++)
{
for (n2 = n1; n2 <= 99; n2++)
{
if (n1 != n2)
{
putchar((n1 / 10) + '0'); /* Print the first digit of n1 */
putchar((n1 % 10) + '0'); /* Print the second digit of n1 */

putchar(' '); /* Print space */

putchar((n2 / 10) + '0'); /* Print the first digit of n2 */
putchar((n2 % 10) + '0'); /* Print the second digit of n2 */

if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
