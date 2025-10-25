#include <stdio.h>

//점을 나타내는 구조체 point
struct point
{
	int x, y;	//x 좌표, y 좌표
};

int equal(struct point p1, struct point p2)		//두 점의 좌표가 일치하는지 확인하는 함수
{
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;			//두 점의 좌표가 일치하면 1반환
	else
		return 0;			//두 점의 좌표가 일치하지 않으면 0반환
}

int main(void)
{
	struct point p1, p2;

	printf("첫번째 점의 좌표를 입력하시오 (x y) : ");	//화면에 '첫번째 점의 좌표를 입력하시오 (x y) : '출력
	scanf_s("%d %d", &p1.x, &p1.y);						//사용자로부터 첫번째 점의 좌표를 입력받아 구조체 변수에 저장

	printf("두번째 점의 좌표를 입력하시오 (x y) : ");	//화면에 '두번째 점의 좌표를 입력하시오 (x y) : '출력
	scanf_s("%d %d", &p2.x, &p2.y);						//사용자로부터 두번째 점의 좌표를 입력받아 구조체 변수에 저장


	if (equal(p1, p2) == 1)
		printf("두 점의 좌표는 일치\n");			//equal에 p1과 p2를 대입한 값이 1이면 '두 점의 좌표는 일치' 출력
	else
		printf("두 점의 좌표는 일치하지 않음\n");	//equal에 p1과 p2를 대입한 값이 1이 아니면 '두 점의 좌표는 일치하지 않음' 출력


	return 0;
}