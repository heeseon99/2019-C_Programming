#include <stdio.h>

int main(void)
{
	char Text;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &Text);

	switch (Text)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;
	}
	return 0;
}