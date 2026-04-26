#include <iostream>
#include<stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n, result = 0;
	stack<int> s;

	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> n;
		s.push(n);

		if (n == 0)
		{
			s.pop();
			s.pop();
		}
	}
	while (!s.empty())
	{
		result += s.top();
		s.pop();
	}

	cout << result << "\n";

	return 0;
}
