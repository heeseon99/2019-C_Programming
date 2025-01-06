//놀이공원에서 롤러코스터를 타려면 키가 140cm이상이고 나이가 10살 이상이어야 한다고 가정
//사용자에게 키와 나이를 질문한 후 '타도 좋습니다.' '죄송합니다.' 출력하는 프로그램 작성

#include <stdio.h>

int main(void)
{
	int height, age;

	printf("키를 입력하시오(cm) : ");		//화면에 '키를 입력하시오(cm) : '출력
	scanf_s("%d", &height);					//입력 받은 수를 height에 저장

	printf("나이를 입력하시오 : ");			//화면에 '나이를 입력하시오 : '출력
	scanf_s("%d", &age);						//입력 받은 수를 age에 저장

	if (height >= 140 && age >= 10)
		printf("타도 좋습니다.\n");			//height가 140 이상이고 age가 10이상이면 '타도 좋습니다.'출력
	else
		printf("죄송합니다.\n");			//height가 140이상이 아니거나 age가 10이상이 아니면 '죄송합니다.'출력

	return 0;
}