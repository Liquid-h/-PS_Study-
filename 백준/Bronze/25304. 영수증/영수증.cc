#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int total, a, b, n, sum;

	cin >> total >> n;

	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		s[i] = a * b;
	}
	sum = accumulate(s.begin(), s.end(), 0);

	if (sum == total)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}
