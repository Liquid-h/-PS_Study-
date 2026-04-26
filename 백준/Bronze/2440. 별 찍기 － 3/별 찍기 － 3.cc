#include<stdio.h>
	
int main(void)
{
	int n;
	int a = 0;
	int k;

	scanf("%d", &n);

	k = n;

	while (1)
	{
		k--;
		if (k < 0)
		{
			break;
		}
		while (1)
		{
			a++;
			if (a > n)
			{
				break;
			}
			printf("*");
		}
		printf("\n");
		n--;
		a = 0;

    }
	return 0;
}