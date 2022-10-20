#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	int d = 4,e=1,f=7,g=1;

	for (a = 0; a < 5; a++)
	{
		for (b = d; b > 0; b--)
		{
			printf(" ");
		}
		for (c = 0; c < e; c++)
		{
			printf("*");
		}
		for (b = d; b > 0; b--)
		{
			printf(" ");
		}
		printf("\n");
		d--;
		e += 2;
	}

	for (a = 0; a < 4; a++)
	{
		for (b = g; b > 0; b--)
		{
			printf(" ");
		}
		for (c = f; c > 0; c--)
		{
			printf("*");
		}
		for (b = g; b > 0; b--)
		{
			printf(" ");
		}
		printf("\n");
		g++;
		f -= 2;
	}
	return 0;
}