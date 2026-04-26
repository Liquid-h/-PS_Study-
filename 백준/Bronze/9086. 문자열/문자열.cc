#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	string n;
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector<char> s(n.begin(), n.end());

		cout << s[0] << s[n.size() - 1] << "\n";
	}

	return 0;
}
