//(1+2+3+...+n)의 합이 1000넘지 않으면서 가장 큰 값과 그때의 n

#include <stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;

	while (sum <= 10000)		//sum이 10000넘지 않으면 실행
	{
		x++;				//x에 1증가
		sum += x;			//sum = sum + x

	}
	//위의 sum은 x가 1증가해 10000이 넘었을 때 값
	sum -= x;			//sum=sum-1
	x--;				//x 1감소

	printf("1부터 %d까지의 합이 %d입니다.\n", x, sum);	//sum이 10000이 넘지 않았을 때의 x값과 sum값 출력

	return 0;
}