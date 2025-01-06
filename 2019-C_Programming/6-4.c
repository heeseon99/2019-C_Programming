//컴퓨터와 가위바위보 하는 게임
//컴퓨터는 사용자에게 알리지 않고 가위바위보 중 하나 선택
//사용자는 프로그램 입력 안내에 따라 3개 중 하나 선택
//사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지 알려줌

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int user, computer;

	printf("선택하시오(1: 가위 2:바위 3:보)");	//화면에 '선택하시오(1: 가위 2:바위 3:보)'출력
	scanf_s("%d", &user);							//입력 받은 수 user에 저장

	computer = (rand() % 3 + 1);				//1~3사이로 난수 발생해 computer에 저장

	if (user == 1)
	{
		if (computer == 1)						//사용자가 가위를 선택하고 컴퓨터가 가위일 경우 '비겼음' 출력
			printf("비겼음\n");
		else if (computer == 2)					//사용자가 가위를 선택하고 컴퓨터가 바위일 경우 '이겼음' 출력
			printf("이겼음\n");
		else									//사용자가 가위를 선택하고 컴퓨터가 보일 경우 '졌음' 출력
			printf("졌음\n");
	}
	else if (user == 2)
	{
		if (computer == 1)						//사용자가 바위 선택하고 컴퓨터가 가위일 경우 '졌음' 출력
			printf("졌음\n");
		else if (computer == 2)					//사용자가 바위 선택하고 컴퓨터가 바위일 경우 '비겼음' 출력
			printf("비겼음\n");
		else									//사용자가 바위 선택하고 컴퓨터가 보일 경우 '이겼음' 출력
			printf("이겼음\n");
	}
	else
	{
		if (computer == 1)						//사용자가 보 선택하고 컴퓨터가 가위일 경우 '이겼음' 출력
			printf("이겼음\n");
		else if (computer == 2)					//사용자가 보 선택하고 컴퓨터가 바위일 경우 '졌음' 출력
			printf("졌음\n");
		else									//사용자가 보 선택하고 컴퓨터가 보일 경우 '비겼음' 출력
			printf("비겼음\n");
	}
	return 0;
}
