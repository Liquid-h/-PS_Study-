#include<stdio.h>

int main(void)
{
	int n = 0;
	int k = 0;

	scanf("%d", &n);

	k = n;

	for (int i = 1; i <= n; i++)
	{
		for (int t = 0; t < n - i; t++)
		{
			printf(" ");
		}
		for (int ii = 0; ii < i; ii++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}