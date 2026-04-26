#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int y = 2024, m = 8;

	cin >> n;

	if (n == 1)
	{
		cout << y << " " << m << endl;
	}
	else if (n > 1)
	{
		while (n > 1)
		{
			m += 7;
			if (m > 12)
			{
				m -= 12;
				y++;
			}
			n--;
		}
		cout << y << " " << m << endl;
	}


	return 0;
}