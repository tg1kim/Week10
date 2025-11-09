#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x, y, answer;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
}