#include<stdio.h>

int main(void) 
{
	int n = 0;
	int a = 0;
	int b = 0;

	scanf("%d", &n);

	while (1)
	{
		if (n <= 4 && n != 3)//나누어 떨어지지않는 케이스
		{
			b++;
			break;
		}
		else if (n % 5 == 0)// 5로 나누어 떨어짐, 바로 끝내면 안됨 10 ,15 등....
		{
			a++;
			n -= 5;
			if (n == 5)//5일때만 끝내야됨
			{
				a++;
				break;
			}
			else if (n == 0)
			{
				break;
			}
		}
		else if (n % 5 != 0)// 5로 나누어 떨어지지 않음, 3깎
		{
			if (n == 3)
			{
				a++;
				break;
			}
			else if (n == 0)
			{
				break;
			}
			n -= 3;
			a++;
		}

	}
	if (b == 1)
	{
		printf("-1");
	}
	else
	{
		printf("%d", a);
	}

	return 0;
}