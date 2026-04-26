#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;

	cin >> s;

	vector<char> v(s.begin(), s.end());

	vector<int> result(26, 0);

	for (char c : s)
	{
		result[c - 'a']++;
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}