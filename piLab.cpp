#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	변수
	divisor에 1.0으로 초기화 한다.
	divident에 4.0으로 초기화 한다.
	sum에 0.0으로 초기화 한다.
	"반복횟수:"
	loopCtr에 입력한다.
	loopCtr이 0보다 클 동안 {
		sum에 divident에서 divisor로 나눈 값을 더한다.
		divident를 음수로 바꾼다.
		divisor에 2를 더한다.
		loopCtr을 감소한다.
	}
	"파이값 = %f\n"
}