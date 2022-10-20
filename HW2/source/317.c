#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	a = 1;
	while (a > -1)
	{
			printf("Enter account number(-1 to end):");
			scanf_s("%f", &a);

			if (a > -1)
			{
				printf("Enter beginning balance:");
				scanf_s("%f", &b);

				printf("Enter total charges:");
				scanf_s("%f", &c);

				printf("Enter total credits:");
				scanf_s("%f", &d);

				printf("Enter credit limit:");
				scanf_s("%f", &e);


				if (b + c - d > e)
				{
					printf("Account:%.2f\n", a);
					printf("Credit limit:%.2f\n", e);
					printf("Balance:%.2f\n", b + c - d);
					printf("Credit Limit Exceeded\n");
					printf("\n");
				}
			}
			
	}

	return 0;
}