/* 중첩 반복문 사용해 아래 내용 출력하는 프로그램 작성
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/

#include <stdio.h>

int main(void)
{
	int x, i, j;

	printf("정수를 입력하시오 : ");	//화면에 '정수를 입력하시오 ' 출력
	scanf_s("%d", &x);				//입력받은 수를 x에 저장

	for (i = 1; i <= x; i++)				//i를 1로 초기화, i가 x보다 작거나 같은 경우 내부 반복문 실행 → i 1증가
	{
		for (j = 1; j <= i; j++)			//j를 1로 초기화, j가 i보다 작은 경우 j출력 → j 1증가
			printf("%d ", j);
		printf("\n");				//줄바꿈
	}

	return 0;
}