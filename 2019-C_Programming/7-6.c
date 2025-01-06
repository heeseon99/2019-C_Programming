#include <stdio.h>

int main(void)
{
	char op;
	int x, y;
	printf("**********************\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("**********************\n");
	//알바벳에 따른 수식 설명
	do {
		printf("연산을 선택하시오 : ");
		scanf_s("%c", &op);
		if (op == 'Q')	//Q 입력할 경우 종료
			break;
		switch (op) {
		case 'A':
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x + y);
			break;		//A입력하면 덧셈 연산

		case 'S':
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x - y);
			break;		//S입력하면 뺄셈

		case 'M':
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x * y);
			break;		//M입력하면 곱하기

		case 'D':
			printf("두 수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &x, &y);
			printf("%d\n", x / y);
			break;	//D입력하면 나누기

		default:
			continue;	//다음 반복으로
		}
	} while (1);
	return 0;
}