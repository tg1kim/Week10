#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	for (int y = 1; y <= 5; y++) {		// 바깥 반복문
		for (int x = 0; x < y; x++)	// 안쪽 반복문
			printf("*");
		printf("\n");
	}
}
