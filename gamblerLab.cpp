#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	initialmoney에 50을 초기화 한다.
	goal에 250을 초기화 한다.
	int i;
	wins에 0을 초기화 한다.
	난수 발생기의 시드를 현재 시간으로 설정 한다.
	100번 반복 {
		cash에 initialMoney로 초기화 한다.
		자금이 있고 목표가 아닐 동안 {
			랜덤으로 0.5 보다 작으면	// rand() % 2
				cash++;
			else
				cash--;
		}
		목표를 달성했으면
			wins++;
	}
	"초기 금액 $%d \n"
	"목표 금액 $%d \n"
	"100번 중에서 %d번 성공\n"
}