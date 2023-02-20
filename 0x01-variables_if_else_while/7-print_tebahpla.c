#include <stdio.h>
/**
 * main -function
 *
 * Description : prints lowercase alphabets in reverse
 *
 * Return : 0 (always success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
