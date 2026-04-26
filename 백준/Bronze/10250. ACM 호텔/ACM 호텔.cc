#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, h, w, n;// 케이스, 층, 방번호, 몇번째
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		int floor, room;

		if (n % h == 0) {
			floor = h;//몇층인지?
			room = n / h; //몇번인지?
		}

		else {
			floor = n % h;
			room = (n / h) + 1;
		}

		cout << (floor * 100) + room << "\n";
	}

	return 0;
}