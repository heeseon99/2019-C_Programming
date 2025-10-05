#include <stdio.h>
int is_leap(int year)											//윤년인지 아닌지 판단하는 함수
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int year;
	printf("연도를 입력하시오 : ");				//화면에 '연도를 입력하시오 : '출력
	scanf_s("%d", &year);							//입력 받은 수를 저장

	int z;
	z = is_leap(year);							//z에 is_leap(year)의 값 저장
	if (z == 1)
		printf("%d년은 366일 입니다.\n", year);	//z의 값이 1이면(윤년이면) 출력하는 문장
	else
		printf("%d년은 365일 입니다.\n", year);	//z의 값이 0이면(윤년이 아니면)출력하는 문장

	return 0;
}