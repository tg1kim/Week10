#include <stdio.h>

#define SEED_MONEY 1000000

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	year에 0으로, money에 SEED_MONEY로 초기화 한다.
	무한 루프 {
		year를 증가
		money에 3할을 더한다.
		money가 SEED_MONEY의 10배보다 크면 
			루프를 탈출한다.
	}
	"%d년\n"
}