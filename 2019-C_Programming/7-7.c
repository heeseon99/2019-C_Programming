//2와 10사이 있는 모든 소수 찾는 프로그램

#include <stdio.h>

int main(void)
{
	int x, y;

	for (x = 2; x <= 100; x++)			//x는 2부터 100까지
	{
		for (y = 2; y <= 100; y++)		//y는 2부터 100까지
		{
			if (x % y == 0)				//x를 y로 나눴을 때 나머지가 0이면 반복문 빠져나가고 아니면 위의 조건식 검사
				break;
		}
		if (x == y)						//x를 y로 나눴을 때 나머지 0이고 x=y이면 화면에 출력

			printf("%d ", x);
	}

	return 0;
}