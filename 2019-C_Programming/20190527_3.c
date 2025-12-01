#include <stdio.h>

int main(void)
{
	int duck;
	int dog;



	for (duck = 0; 2 * duck <= 60; duck++)
	{
		dog = (60 - (2 * duck)) / 4;
		if (2 * duck + 4 * dog == 60)
		{
			printf("오리 %d마리 개 %d마리\n", duck, dog);
		}

	}
	return 0;
}