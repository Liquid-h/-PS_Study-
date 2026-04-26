#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<string> w;
	string s;

	while (getline(cin, s))
	{
		w.push_back(s);
	}
	for (int i = 0; i < w.size(); i++)
	{
		cout << w[i] << "\n";
	}

	return 0;
}