#include <stdio.h>

//은행계좌를 나타내는 구조체 account
struct account
{
	int number;		//계좌번호
	char name[20];	//이름
	int balance;	//잔액
};

int main(void)
{
	struct account a1 = { 1, "홍길동", 100000 };	//구조체 변수에 값 대입
	printf("{%d, %s, %d}\n", a1.number, a1.name, a1.balance);	//결과 출력

	return 0;
}