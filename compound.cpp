#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	정수형 변수 i, years를 정의한다.
	실수형 변수 total, rate, investment를 정의한다.
	"원금: "
	investment에 입력한다.
	"이율(%%): "
	rate에 입력한다.
	"기간(년): "
	years에 입력한다.
	printf("==================\n");
	printf("연도 원리금\n");
	printf("==================\n");
	total에 investment를 저장한다.
	rate를 퍼센트에서 이율로 변환한다
	for 루프 years 동안 {
		total에 새로운 원리금 계산
		"%2d	%10.1f\n"	
	}
}