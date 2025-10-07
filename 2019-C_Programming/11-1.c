#include <stdio.h>

int main(void)
{
	int x = 0x12345678;													//int형 변수 x, 0x12345678은 16진수로 표현, 12/34/56/78로 나눠짐
	unsigned char* xp = (char*)&x;										//int는 ++연산 후 4증가, 자릿 수 한자리씩 1씩 증가해 출력하기 위해 x를 char으로 형변환 해서 xp에 대입

	printf("바이트 순서 : %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);	//xp를 출력
	return 0;
}