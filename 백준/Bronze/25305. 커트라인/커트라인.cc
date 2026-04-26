#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cutline;

	cin >> n >> k;

	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	sort(s.begin(), s.end(),greater<int>());

	cutline = s[k - 1];

	cout << cutline << "\n";

	return 0;
}
