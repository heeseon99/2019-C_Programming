#include <stdio.h>

int check()
{
	static int count = 1;					//정적 지역 변수 count, 초기값 1
	int password;							//사용자로부터 입력 받은 비밀번호 저장할 물자

	count++;								//count 1증가

	printf("비밀번호 : ");					//화면에 '비밀번호 : '출력
	scanf_s("%d", &password);					//입력 받은 내용 password에 저장

	if (count > 3)
	{
		printf("로그인 시도 횟수 초과\n");	//count가 3보다 크면 '로그인 시도 횟수 초과' 출력 후 줄바꿈
		return 0;
	}
	else if (password == 1234)
	{
		printf("로그인 성공\n");				//사용자가 입력한 내용이 1234와 일치하면 '로그인 성공'출력 후 줄바꿈
	}
}

int main(void)
{
	check();
	check();
	check();
	return 0;
}