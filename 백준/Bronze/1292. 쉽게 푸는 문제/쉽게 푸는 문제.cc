#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b, k= 0;
	int sum = 0;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= b; i++)
	{
		for (int ii = 1; ii <= i; ii++)
		{
			k++;

			if (a <= k && k <= b)
			{
				sum = sum + i;
			}
		}
	}
	printf("%d", sum);

	return 0;
}