#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	변수
	난수 발생기의 시드를 현재 시간으로 초기화 한다.
	10번 반복 {
		x에 난수를 발생한다.
		y에 난수를 발생한다.
		"%d + %d ? "
		answer에 입력한다.
		x + y가 answer와 같으면
			printf("맞았습니다.\n");
		아니면
			printf("틀렸습니다.\n");
	}
}