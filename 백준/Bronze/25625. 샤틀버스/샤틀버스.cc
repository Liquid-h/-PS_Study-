#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x, y, result = 0;

	cin >> x >> y;

	if (x > y)
	{
		result = x + y;
	}
	else
	{
		result = y - x;
	}

	cout << result << endl;

	return 0;
}