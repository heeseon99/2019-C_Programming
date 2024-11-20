//경보음이 울린 후 메시지(화재가 발생하였습니다.) 출력하고 다시 경보음 울리는 프로그램

#include <stdio.h>

int main(void)
{
	printf("\a");
	printf("화재가 발생하였습니다.");
	printf("\a");

	return 0;
}