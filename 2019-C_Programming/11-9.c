#include <stdio.h>

int search(int* a, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] == search_value)
			return i;
	}
}

int main(void)
{
	int money[100] = { 50,100,350,400,560,200,384,973,274,274 };
	int index;
	index = search(money, 10, 200);
	printf("월급이 200만원인 사람의 인덱스 = %d\n", index);

	return 0;
}