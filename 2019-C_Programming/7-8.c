//사용자로부터 숫자 입력 받아 숫자만큼 * 출력

#include <stdio.h>

int main(void)
{
	int x, y;

	while (1)
	{
		printf("막대의 높이(종료 : -1) : ");
		scanf_s("%d", &x);

		if (x != -1)					//x가 -1이 아니면 실행
			for (y = 0; y < x; y++)		//y는 0부터 x보다 작을 때 까지, 조건 만족하면 *출력후 1증감
				printf("*");
		printf("\n");

		if (x == -1)					//x가 -1이면 반복문 빠져 나감
			break;
	}

	return 0;
}