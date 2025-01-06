//사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램 작성

#include <stdio.h>

int main(void)
{
	int x, n;
	n = 1;

	printf("정수를 입력하시오 : ");	//화면에 '정수를 입력하시오 : '출력
	scanf_s("%d", &x);				//입력 받은 수 x에 저장

	printf("약수 : ");				//화면에 '약수 : '출력

	while (n <= x)					//n이 x보다 작으면
	{
		if ((x % n == 0))				//x를 n으로 나누었을 때 나머지가 이면
			printf("%d ", n);		//화면에 n출력

		n++;						//n을 1증가
	}

	printf("\n");					//줄바꿈

	return 0;
}
