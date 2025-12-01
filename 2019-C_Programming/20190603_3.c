#include <stdio.h>

#define SIZE 10

double score2grade(double* scores, double* grades, int size)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (scores[i] <= 100 && scores[i] >= 95)
			return grades[i] = 4.5;
		else if (scores[i] <= 94 && scores[i] >= 90)
			return grades[i] = 4.0;
		else if (scores[i] <= 89 && scores[i] >= 85)
			return grades[i] = 3.5;
		else if (scores[i] <= 84 && scores[i] >= 80)
			return grades[i] = 3.0;
		else if (scores[i] <= 79 && scores[i] >= 75)
			return grades[i] = 2.5;
		else if (scores[i] <= 74 && scores[i] >= 70)
			return grades[i] = 2.0;
		else if (scores[i] <= 69 && scores[i] >= 65)
			return grades[i] = 1.5;
		else if (scores[i] <= 64 && scores[i] >= 60)
			return grades[i] = 1.0;
		else if (scores[i] <= 59)
			return grades[i] = 0;
	}

}

int main(void)
{
	double scores[SIZE];
	double grades[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학생들의 시험 점수를 입력하시오 : ");
		scanf_s("%lf", &scores[i]);
		printf("평점 : %.1f\n", score2grade(scores, grades, SIZE));
	}

	return 0;
}