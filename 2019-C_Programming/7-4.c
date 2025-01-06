/*반복 루프를 사용하여 아래 모양을 출력하는 프로그램 작성
*
**
***
****
*****
******
*******
*/

#include <stdio.h>

int main(void)
{
	int x, y;

	for (y = 0; y < 7; y++)			//
	{
		for (x = 0; x < (6 - y); x++)	//
			printf(" ");        // ' '출력

		for (x = (6 - y); x < 7; x++)  //
			printf("*");		// '*' 출력

		printf("\n");			// 줄바꿈
	}
	return 0;
}