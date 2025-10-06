#include <stdio.h>

void show_digit(int x)
{
	if (x == 0)
		return;							//x가 영이면 return
	show_digit(x / 10);					//x를 10으로 나눔
	printf("%d ", x % 10);				//x를 10으로 나누었을 때 나머지 출력
}

int main(void)
{
	int x;
	printf("정수를 입력하시오 : ");	//화면에 '정수를 입력하시오 : '출력
	scanf_s("%d", &x);				//입력 받은 수 x에 저장

	show_digit(x);					//show_digit()에 x대입

	return 0;
}