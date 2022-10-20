#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d;
	a = 1;

	while (a > -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%f", &a);

		if (a > -1)
		{
			printf("Enter hourly rate of the worker(&00.00):");
			scanf("%f", &b);

			c = a * b;
			d = a +b + b / 2;

			if (a < 41)
			{
				printf("Salary is $%.2f\n\n", c);
			}
			else
			{
				printf("Salary is $%.2f\n\n", d);
			}
		}
	}
	return 0;
}