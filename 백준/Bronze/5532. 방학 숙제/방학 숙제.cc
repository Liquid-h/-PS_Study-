#include<stdio.h>	

int main(void)
{
	int L = 0;
	int A = 0; 
	int B = 0; 
	int C = 0; 
	int D = 0;

	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

	int n = 0;
	int	m = 0;

	while (A > 0)
	{
		A -= C;
		n++;
	}
	while (B > 0)
	{
		B -= D;
		m++;
	}
	int k = (n > m) ? n : m;

	printf("%d", L - k);

	return 0;
}