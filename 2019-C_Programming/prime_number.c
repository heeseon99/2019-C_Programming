#include <stdio.h>
void is_prime(int n)
{
	int x, y;

	for (x = 2; x <= n; x++)			//x는 2부터 100까지
	{
		for (y = 2; y <= n; y++)		//y는 2부터 100까지
		{
			if (x % y == 0)				//x를 y로 나눴을 때 나머지가 0이면 반복문 빠져나가고 아니면 위의 조건식 검사
				break;
		}
		if (x == y)						//x를 y로 나눴을 때 나머지 0이고 x=y이면 화면에 출력

			printf("%d ", x);
	}

}

int main(void)
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	is_prime(x);			// is_prime 함수 실행
	printf("\n");		//줄바꿈

	return 0;
}