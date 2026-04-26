#include<stdio.h>	

int main(void)
{
	int n = 0;
	int um = 0, joon = 0, sik = 0;
	int sans = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		um += i;
	}
	joon = um * um;
	for (int i = 1; i <= n; i++)
	{
		sik = i * (i + 1) / 2;
		sans = sik * sik;
	}

	printf("%d\n", um);
	printf("%d\n", joon);
	printf("%d\n",sans);

	return 0;
}