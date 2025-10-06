#include <stdio.h>

int power(int base, int power_raised)
{
	if (power_raised == 0)								//지수가 0이면 1반환
		return 1;
	else
		return base * power(base, power_raised - 1);	//지수가 0이 아니면 base * power(base, power_raised - 1) 반환
}

int main(void)
{
	int b, p;								//밑수 저장할 변수 b, 지수 저장할 변수 p

	printf("밑수 : ");						//화면에 '밑수 : '출력
	scanf_s("%d", &b);						//사용자로부터 입력 받은 수를 b에 저장
	printf("지수 : ");						//화면에 '지수 : '출력
	scanf_s("%d", &p);						//사용자로부터 입력 받은 수를 p에 저장
	int result;								//결과 저장할 변수 result
	result = power(b, p);					//power()에 b와 p를 대입한 값은 result에 저장
	printf("%d^%d = %d", b, p, result);		//결과 출력
	return 0;
}
