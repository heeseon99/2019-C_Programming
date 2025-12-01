#include <stdio.h>

int sum(int num)
{
	if (num == 0)
		return 0;		//num이 0이면 0을 반환

	else
		return (num % 10) + sum(num / 10);	//num이 0이 아니면 (num%10)+sum(num/10)을 반환
}

int main(void)
{
	int num;

	printf("자릿수의 합계를 계산할 수를 입력하시오 : "); //화면에'자릿수의 합계를 계산할 수를 입력하시오 : '출력
	scanf_s("%d", &num);	//사용자로부터 입력 받은 수를 num에 저장

	printf("자릿수의 합계는 %d입니다.\n", sum(num));	//결과 출력

	return 0;
}