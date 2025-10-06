#include <stdio.h>

int sum(int n)
{
	if (n != 0)
		return n + sum(n - 1);		//n이 0이 아니면 n+sum(n-1)반환

	else
		return n;					//n이 0이면 n(0)반환
}


int main(void)
{
	int n;
	printf("정수를 입력하시오 : ");					//화면에 '정수를 입력하시오 : '출력
	scanf_s("%d", &n);								//사용자로부터 입력 받은 수를 n에 저장

	int result;
	result = sum(n);								//result에 sum에 n대입한 값 저장

	printf("1부터 %d까지의 합 = %d\n", n, result);	//결과 출력
	return (0);
}