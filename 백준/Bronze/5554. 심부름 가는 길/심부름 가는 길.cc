#include<iostream>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int q, w, e, r;
	int m = 0, s = 0;

	cin >> q >> w >> e >> r;

	s = q + w + e + r;
	if (s >= 60)
	{
		while (s >= 60)
		{
			s -= 60;
			m++;
		}
	}
	cout << m << endl << s;

	return 0;
}
