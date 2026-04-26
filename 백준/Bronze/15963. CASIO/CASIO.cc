#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	bool casio = true;
	long long int n, m;

	cin >> n >> m;

	if (n == m)
	{
		cout << casio << endl;
	}
	else
	{
		casio = false;
		cout << casio << endl;
	}

	return 0;
}