#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	int num = 0;
	cin >> n;

	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> k;
		s[i] = k;
	}

	sort(s.begin(), s.end());

	for (int i = 0; i < n; i++)
	{
		cout << s[i] << "\n";
	}

	return 0;
}
