#include <stdio.h>

int array_sum(int* A, int size)		//회사에서 지급할 월급의 총액 계산하는 함수 array_sum
{
	int i, sum;
	sum = 0;						//sum을 0으로 초기화

	printf("A[] = ");

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &A[i]);
		sum = sum + A[i];			//i의 초기값 0, 조건(i<size)만족하면 입력받은 값을 A[i]에 저장, sum = sum+A[i] 실행 후 i를 1증가
	}
	return sum;						//sum을 반환

}

int main(void)
{
	int money[10];

	printf("월급의 합 = %d", array_sum(money, 10));		//결과 출력
	return 0;
}

