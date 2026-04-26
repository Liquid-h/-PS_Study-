#include<stdio.h>

int main(void)
{
	int n = 0;
	int a, b = 0;

	scanf("%d", &n);

	for (int i = 0; i < n ; i++)
	{
		scanf("%d %d", &a, &b);

		printf("%d\n", a + b);

	}

	return 0;
}