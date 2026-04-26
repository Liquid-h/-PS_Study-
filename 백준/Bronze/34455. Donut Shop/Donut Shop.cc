#include <iostream>
#include<queue>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int q, w, e, result;

	queue<int> s;

	string r;

	cin >> q >> w;

	result = q;

	for (int i = 0; i < w; i++)
	{
		cin >> r >> e;

		s.push(e);

			if (r == "+")
			{
				result += s.front();
			}
			else if (r == "-")
			{
				result -= s.front();
			}

		s.pop();
	}

	cout << result;

	return 0;
}
