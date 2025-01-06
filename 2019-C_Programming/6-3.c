//사용자로부터 3개의 정수를 읽어 들인 후 if-else문 사용해 가장 작은 값 결정하는 프로그램

#include <stdio.h>

int main(void)
{
	int x, y, z;										//3개의 정수 입력 받을 변수 x, y, z

	printf("3개의 정수를 입력하시오 : ");				//화면에 '3개의 정수를 입력하시오 : '출력
	scanf_s("%d %d %d", &x, &y, &z);						//입력 받은 수를 각각 x, y, z에 저장

	if (x > y)										//x>y가 참
		if (z > y)										//z>y가 참					
			printf("제일 작은 정수는 %d입니다.", y);		//제일 작은 정수 - y
		else											//z>y가 거짓
			printf("제일 작은 정수는 %d입니다.", z);		//제일 작은 정수 - z
	else											//x>y가 거짓
		if (x > z)										//x>z가 참
			printf("제일 작은 정수는 %d입니다.", z);		//제일 작은 정수 - z
		else											//x>z가 거짓
			printf("제일 작은 정수는 %d입니다.", x);		//제일 작은 정수 - x

	return 0;
}