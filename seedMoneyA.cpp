#include <stdio.h>

#define SEED_MONEY 1000000

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int year = 0, money = SEED_MONEY;
	while (1) {
		year++;
		money += money*0.30;
		if (money > 10 * SEED_MONEY) 
			break;
	}
	printf("%d³â\n", year);
}