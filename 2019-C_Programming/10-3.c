#include <stdio.h>

#define SIZE 10										

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)		//i의 초기값 0, i가 SIZE(10)보다 작을 때 까지 반복, 반본 1번 끝나면 i를 1증가
	{
		if (a[i] != b[i])
			return 0;				// a[i]와 b[i]가 같지 않으면 0반환
	}
	return 1;				// a[i]와 b[i]가 같으면 1반환
}


int main(void)
{
	int a[SIZE];
	int i;
	printf("배열 a : ");			//화면에 '배열 a : '출력
	for (i = 0; i < SIZE; i++)		//i초기값 0, i가 size(10)보다 작을 때 까지  반복, 반복 1번 끝나면 i를 1증가
	{
		scanf_s("%d", &a[i]);			//값 입력 받아 a[i]에 저장
	}
	int b[SIZE];
	int e;
	printf("배열 b : ");			//화면에 '배열 b : '출력
	for (e = 0; e < SIZE; e++)		//e초기값 0, e가 size(10)보다 작을 때 까지  반복, 반복 1번 끝나면 e를 1증가
	{
		scanf_s("%d", &b[e]);		//값 입력 받아 b[i]에 저장
	}

	if (array_equal(a, b, SIZE) == 1)
		printf("2개의 배열은 같음\n");		//arry_equal에 a, b, SIZE를 대입한 값의 결과가 1이면 화면에 '2개의 배열은 같음' 출력 후 출바꿈
	else
		printf("2개의 배열은 다름\n");		//arry_equal에 a, b, SIZE를 대입한 값의 결과가 1이 아니면 화면에 '2개의 배열은 다름'출력 후 줄바꿈

	return 0;
}