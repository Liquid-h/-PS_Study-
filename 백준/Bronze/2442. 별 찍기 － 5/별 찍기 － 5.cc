#include<stdio.h>

int main(void)
{
	int n = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int ii = 0; ii <= n - 1 - i; ii++)
		{
			printf(" ");
		}
		for (int ii = 0; ii < 2 * i - 1; ii++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}