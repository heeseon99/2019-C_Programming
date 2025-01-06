//놀이공원 자유이용권 가격 계산하는 프로그램
//현재 시간과 사용자의 나이를 입력받아 지불하여야 하는 요금 출력

#include <stdio.h>

int main(void) {
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이) : ");
	scanf_s("%d %d", &time, &age);

	if (time < 17)
	{
		if (age >= 3 && age <= 12 || age >= 65)
			printf("요금은 25000입니다.\n");
		else
			printf("요금은 34000원 입니다.\n");
	}
	else
		printf("요금은 10000입니다.\n");

	return 0;
}