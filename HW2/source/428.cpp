#include <stdio.h>
#include <stdlib.h>

int profession;
float hours;
float week_hours;
float hours_money;
float earns;
float earns_money;
int item;
float item_money;
float total_item_money;

int main(void)
{
	while (1)
	{

		printf("�п�J�z��¾�~ 1�O�g�z 2�O�p�ɤu 3�O�~�ȭ� 4�O�p��u �п�J�Ʀr:");
		scanf("%d", &profession);
		switch (profession)
		{
		case 1:
			printf("�z�P�~�O16250");
			break;
		case 2:
			for (int i = 1; i <= 5; i++)
			{
				printf("�п�J�z�P��%d�u�@�ɼ�:",i);
				scanf("%f", &hours);
				if (hours > 8)
				{
					hours_money = hours_money + 168 * 8 + 262 * (hours - 8);
					week_hours = week_hours + hours;
				}
				else
				{
					hours_money = hours_money + 168 * hours;
					week_hours = week_hours + hours;
				}
			}
			if (week_hours <= 40)
			{
				printf("�z�P�~�O:%.f", hours_money);
			}
			if (week_hours > 40)
			{
				printf("�z�P�~�O:%.f(�z�w�L��)", hours_money);
			}
			break;

		case 3:
			printf("�п�J�`�P���B:");
			scanf("%f", &earns);
			earns_money = 7500 + earns * 0.057;
			printf("�z�P�~�O:%.f", earns_money);
			break;

		case 4:
			printf("�п�J�@��X��:");
			scanf("%f", &item_money);
			for (int i = 1; i <= 5; i++)
			{
				printf("�п�J��%d���:",i);
				scanf("%d", &item);
				total_item_money = total_item_money + item * item_money;
			}
			printf("�z�P�~�O:%.f", total_item_money);
			break;
		default:
			break;
		}
		printf("\n");
	}
	return 0;
}