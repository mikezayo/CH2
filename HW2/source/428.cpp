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

		printf("請輸入您的職業 1是經理 2是小時工 3是業務員 4是計件工 請輸入數字:");
		scanf("%d", &profession);
		switch (profession)
		{
		case 1:
			printf("您周薪是16250");
			break;
		case 2:
			for (int i = 1; i <= 5; i++)
			{
				printf("請輸入您星期%d工作時數:",i);
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
				printf("您周薪是:%.f", hours_money);
			}
			if (week_hours > 40)
			{
				printf("您周薪是:%.f(您已過勞)", hours_money);
			}
			break;

		case 3:
			printf("請輸入總銷售額:");
			scanf("%f", &earns);
			earns_money = 7500 + earns * 0.057;
			printf("您周薪是:%.f", earns_money);
			break;

		case 4:
			printf("請輸入一件幾元:");
			scanf("%f", &item_money);
			for (int i = 1; i <= 5; i++)
			{
				printf("請輸入第%d件數:",i);
				scanf("%d", &item);
				total_item_money = total_item_money + item * item_money;
			}
			printf("您周薪是:%.f", total_item_money);
			break;
		default:
			break;
		}
		printf("\n");
	}
	return 0;
}