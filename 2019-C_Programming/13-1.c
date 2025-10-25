#include <stdio.h>

//구조체 book 선언
struct book
{
	int id;				//id
	char title[100];	//제목
	char author[20];	//작가
};

int main(void)
{
	struct book b1 = { 1, "바람과 함께 사라지다", "마가렛 미첼" }; //구조체 변수에 값 대입

	printf("{%d, %s, %s}\n", b1.id, b1.title, b1.author);	//결과 출력

	return 0;
}