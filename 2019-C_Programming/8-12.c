#include <stdio.h>
void print_value(int n)				//n의 값만큼 *출력하는 함수
{
	for (int i = 0; i < n; i++)		//i의 초기값 0, i<n만족하면 *하나 출력후 i를 1증가 시킨 후 다시 조건 검사
		printf("*");
}

int main(void)
{
	int n;

	while (1)
	{
		printf("값을 입력하시오 (종료는 음수) : ");	//화면에 '값을 입력하시오 (종료는 음수) : ' 출력
		scanf_s("%d", &n);							//사용자로부터 입력 받은 수를 n에 저장

		if (n < 0)
			break;									//n이 0보다 작으면 종료
		else
		{
			print_value(n);							//n이 0보다 크면 print_value(n) 실행

			printf("\n");							//줄바꿈
		}
	}
	return 0;
}