/*�ݺ� ������ ����Ͽ� �Ʒ� ����� ����ϴ� ���α׷� �ۼ�
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
			printf(" ");        // ' '���

		for (x = (6 - y); x < 7; x++)  //
			printf("*");		// '*' ���

		printf("\n");			// �ٹٲ�
	}
	return 0;
}