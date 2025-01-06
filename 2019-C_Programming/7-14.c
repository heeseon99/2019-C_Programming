//정수의 자릿수 반대로 출력

#include <stdio.h>

int main(void)
{
	int num;
	int Rnum = 0;						//자리수 반대 인 수 저장할 변수

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	while (num > 0)						//입력한 수가 0보다 크면
	{
		Rnum = Rnum * 10 + num % 10;
		num = num / 10;
	}
	printf("%d", Rnum);

	return 0;
}