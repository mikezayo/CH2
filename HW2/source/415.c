#include <stdio.h>
#include <stdio.h>

int main(void)
{
	float i, rate;
	int y;
	rate = 1.095;
	i = 5000;
	for (y = 1; y < 16; y++)
	{
		if (y % 3 == 1)
		{
			rate = rate + 0.005;
			i = i * rate;
			if (y < 10)
			{
				printf("The %d year=%.5f\n", y, i);
			}
			else
			{
				printf("The %d year=%.5f\n", y, i);
			}
		}
		else
		{
			i = i * rate;
			if (y < 10)
			{
				printf("The %d year=%.5f\n", y, i);
			}
			else
			{
				printf("The %d year=%.5f\n", y, i);
			}
		}
	}
	return 0;
}