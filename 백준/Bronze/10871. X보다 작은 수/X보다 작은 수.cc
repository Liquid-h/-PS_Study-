#include<iostream>

int main(void)
{
	int n, x, s;

	std::cin >> n;
	std::cin >> x;

	for (int i = 1; i <= n; i++)
	{
		std::cin >> s;
		if (s < x)
		{
			std::cout << s << " ";
		}
	}

	return 0;
}
