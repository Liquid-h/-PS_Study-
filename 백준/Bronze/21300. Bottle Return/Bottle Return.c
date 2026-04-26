#include<stdio.h>	

int main(void)
{
	int beer, malt, wine, softdrinks, seltzer, water = 0;
	int n, um = 0;

	scanf(" %d %d %d %d %d %d", &beer, &malt, &wine, &softdrinks, &seltzer, &water);

	um = beer + malt + wine + softdrinks + seltzer + water;

	um = um * 5;

	printf("%d", um);

	return 0;
}