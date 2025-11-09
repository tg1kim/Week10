#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;	// 다음으로 계속
		printf("%d ", i);
	}
}