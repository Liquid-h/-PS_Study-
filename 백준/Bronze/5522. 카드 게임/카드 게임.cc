#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		result += n;
	}

	cout << result << "\n";

	return 0;
}
