#include <stdio.h>

int main(void)
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };		//배열 초기화
	int i;

	for (i = 7; i < 12; i++)				//i의 초기값 7, i가 12보다 작을 때까지 반복, 반복 한번 끝나면 i를 1증가
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]); //출력

	return 0;
}