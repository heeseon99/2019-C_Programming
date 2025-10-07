#include <stdio.h>

#define SIZE 10

int array_copy(int a[], int b[], int size)		//배열 a의 요소를 배열 b로 복사하는 함수
{
	int i;
	for (i = 0; i < size; i++)			//i초기값 0, i가 SIZE(10)보다 작을 때 까지 반복, 반복 1번 끝나면 i를 1증가
		b[i] = a[i];					//a[i]=b[i]
}

int main(void)
{
	int a[SIZE];
	int i;
	printf("배열 a : ");				//화면에 '배열 : a' 출력
	for (i = 0; i < SIZE; i++)			//i초기값 0, i가 SIZE(10)보다 작을 때 까지 반복, 반복 1번 끝나면 i를 1증가
	{
		scanf_s("%d", &a[i]);				//배열 a입력
	}
	int b[SIZE];

	array_copy(a, b, SIZE);				//array_copy에 a, b, SIZE를 대입

	printf("\n배열 a의 요소를 배열 b로 복사 \n-> 배열 b : ");

	int o;
	for (o = 0; o < SIZE; o++)			//o의 초기값 0, o가 SIZE(10)보다 작을 때 까지 반복, 반복 1번 끝나면 o를 1증가
	{
		printf("%d ", b[o]);			//배열 b 출력
	}
	printf("\n");

	return 0;
}