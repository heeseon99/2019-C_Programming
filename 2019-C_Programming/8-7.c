#include <stdio.h>
int get_tax(int income)			//소득세 계산하는 함수
{
	if (income <= 1000)
		return income * 0.08;	//소득이 1000만원 이하면 소득세는 소득의 8%
	else
		return income * 0.1;	//소득이 1000만원을 초과하면 소득세는 소득의 10%
}

int main(void)
{
	int income;								//소득을 저장할 변수
	printf("소득세를 입력하시오 (만원) : ");	//화면에 '소득세를 입력하시오 (만원) : ' 출력
	scanf_s("%d", &income);					//사용자로부터 입력받은 수를 income에 저장

	int tax;								//정수형 변수 tax
	tax = get_tax(income);					//tax는 get_tax함수에 income을 대입한 값

	printf("소득세는 %d입니다.\n", tax);		//결과 출력

	return 0;
}