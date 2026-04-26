#include<stdio.h>

int main(void)
{
	int a, b = 0;
	int n = 0;

	while (1)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
		{
			break;
		}
		else
		{
			printf("%d\n", a + b);
		}
	}
	return 0;
}