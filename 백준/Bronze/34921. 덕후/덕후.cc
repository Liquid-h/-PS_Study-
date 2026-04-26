#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, t, result = 0;
	cin >> a >> t;

	result = 10 + 2 * (25 - a + t);

	if (result < 0 || result == 0)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << result << endl;
	}
	return 0;
}