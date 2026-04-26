#include<stdio.h>
#define Subject 1001
#define ssubject 1001

int main(void)
{
	int n = 0;// 세준이 나쁜놈,,,,,,과목수
	int m = 0;//세준이 개모대,,,,,,,최고점
	int num[Subject];//,,,,,,,,,,,,,과목별 점수
	float result[ssubject];//,,,,,,,,,,,,,whwrkxek
	float rere = 0;
	int ii = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);  

		if (i == 0 || num[i] > m)  
		{
			m = num[i];
		}
	}

	while (1)
	{
		result[ii] = (float)num[ii] / m * 100;  

		ii++;
		if (ii == n) 
		{
			for (int iii = 0; iii < n; iii++)
			{
				rere += result[iii];  
			}
			break;
		}
	}

	printf("%f", rere / n); 

	return 0;
}
