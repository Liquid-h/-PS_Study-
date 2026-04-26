#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int n = 0;
	int k = 0;

	scanf("%d", &n);

	for (int i = 1; i < 10; i++)
	{
		k = i * n;

		printf("%d * %d = %d\n", n, i, k);
	}

	return 0;
}