#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,a,b;
	printf("(A)\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n\n(B)\n");

	for (i = 11; i > 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n\n(C)\n");
	a = 1;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (j < a)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		a++;
		printf("\n");
	}

	printf("\n\n(D)\n");
	b = 10;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (j < b)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		b--;
		printf("\n");
	}

	return 0;
}