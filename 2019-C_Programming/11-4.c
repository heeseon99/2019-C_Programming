#include <stdio.h>
void array_print(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &A[i]);
	}								//i의 초기값 0, 조건(i<size)만족하면 입력 받은 수를 A[i]에 저장한 후 i를 1증가

	printf("A[] = {");
	for (i = 0; i < size; i++)
	{
		printf(" %d", A[i]);		//i의 초기값 0, 조건(i<size) 만족하면 A[i] 출력 후 i를 1증가
	}

	printf(" }\n");					//' }'출력 후 줄바꿈
}

int main(void)
{
	int data[10];					//요소의 개수 10개인 배열 data

	array_print(data, 10);			//array_print에 (data, 10)대입

	return 0;
}