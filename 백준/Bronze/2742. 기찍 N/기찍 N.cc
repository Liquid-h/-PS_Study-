#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int n = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", n - i);
	}
	
	return 0;
}