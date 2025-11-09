#include <stdio.h>
#include <conio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x, y;
	for (y = 1; y < 10000; y++) {
		for (x = 1; x < 50; x++) {
			if (_kbhit())
				goto OUT;	// OUTÀ¸·Î
			printf("*");
		}
		printf("\n");
	}
OUT:
	;
}

