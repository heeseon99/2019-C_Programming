#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	while (1)
	{
		srand((unsigned)time(NULL));

		int user, computer;
		printf("선택하시오(1: 가위 2:바위 3:보) : ");	//화면에 '선택하시오(1: 가위 2:바위 3:보)'출력
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
		else if (user == 3)
		{
			if (computer == 1)						//사용자가 보 선택하고 컴퓨터가 가위일 경우 '이겼음' 출력
				printf("이겼음\n");
			else if (computer == 2)					//사용자가 보 선택하고 컴퓨터가 바위일 경우 '졌음' 출력
				printf("졌음\n");
			else									//사용자가 보 선택하고 컴퓨터가 보일 경우 '비겼음' 출력
				printf("비겼음\n");
		}
		char ans;
		printf("계속하시겠습니까(Y/N) : ");
		scanf_s(" %c", &ans, 1);
		if (ans == 'N')
			break;
	}

	return 0;
}
