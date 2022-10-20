#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d;
	a = 1;
	
	while (a > -1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &a);

		if (a > -1)
		{
			printf("Enter interest rate:");
			scanf("%f", &b);

			printf("Enter term of the loan in days:");
			scanf("%f", &c);

			d = a * b * c / 365;

			printf("The interest charge is &%.2f\n", d);
		}

	}
	return 0;
}