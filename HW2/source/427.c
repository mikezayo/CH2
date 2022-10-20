#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a < 500; a++)
	{
		for (b = 1; b < a; b++)
		{
			for (c = 1; c < 500; c++)
			{
				if (a * a + b * b == c * c)
				{
					printf("%d  %d  %d\n", b, a, c);
				}
			}

		}
	}
	return 0;
}