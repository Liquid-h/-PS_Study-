#include <stdio.h>

int main(void)
{
	int n = 0;
	int a, b = 0;
	scanf("%d", &n);

	a = n - n * 0.22;
	b = n  - ((n * 0.2) * 0.22);

	printf("%d", a);
	printf(" ");
	printf("%d",b);

	return 0;
}
