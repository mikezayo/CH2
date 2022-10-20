#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, i, j,z;

	printf("¼e:");
	scanf("%d", &a);
	printf("ªø:");
	scanf("%d", &b);

	for (i = 0; i < a; i++)
	{
		printf("*");
	}

	printf("\n");

	for (j = 0; j < b-2; j++)
	{
		printf("*");

		for (z = 0; z < a - 2; z++)
		{
			printf(" ");
		}

		printf("*\n");
	}

	for (i = 0; i < a; i++)
	{
		printf("*");
	}

	return 0;
}