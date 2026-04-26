#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int h, m, s, time;

	cin >> h >> m >> s;
	cin >> time;

	while (time > 0)
	{
		time--;
		s++;
		if (s > 59)
		{
			s = 0;
			m++;
			if (m > 59)
			{
				m = 0;
				h++;
				if (h > 23)
				{
					h = 0;
				}
			}
		}
	}

	cout << h << " " << m << " " << s;

	return 0;
}