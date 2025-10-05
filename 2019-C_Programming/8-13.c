#include <stdio.h>
int is_multiple(int n, int m)
{
	if (m % n == 0)				//m 나누기 n의 나머지가 0이면 1반환
		return 1;
	else
		return 0;				//m나누기 n의 나머지가 0이 아니면 0반환
}

int main(void)
{
	int n, m;

	printf("첫번째 정수를 입력하시오 : ");	//화면에 '첫번째 정수를 입력하시오 : ' 출력
	scanf_s("%d", &m);						// 사용자로부터 입력 받은 수를  m에 저장

	printf("두번째 정수를 입력하시오 : ");	//화면에 '두번째 정수를 입력하시오 : ' 출력
	scanf_s("%d", &n);						// 사용자로부터 입력 받은 수를  n에 저장

	int z;
	z = is_multiple(n, m);					//z에 is_multiple에 n, m을 대입한 결과 저장

	if (z == 1)
	{
		printf("%d는 %d의 배수입니다.\n", m, n);	//z가 1이면 출력할 결과
	}
	else
	{
		printf("%d는 %d의 배수가 아닙니다.\n", m, n);	//z가 1이 아니면 출력할 결과
	}
	return 0;
}
