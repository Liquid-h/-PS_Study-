#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{
	int n = 0;
	int k = 1;

	scanf("%d", &n);

	for ( int i = 1; i <= n; i++)
	{
		k *= i;
	}
	printf("%d", k);

	return 0;
}