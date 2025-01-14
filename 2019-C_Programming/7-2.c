//1부터 100사이의 모든 3의 배수의 합을 계산하여 출력하는 프로그램을 반복구조를 사용해 작성

#include <stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;

	while (x <= 100)				//x가 100보다 작거나 같으면 
	{
		if ((x % 3) == 0)		//x를 3으로 나눴을 때 나머지가 0이면
			sum += x;			//sum=sum+x
		x++;					//x를 1증가

	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);//1부터 100까지의 모든 3의 배수의 합이 출력

	return 0;

}