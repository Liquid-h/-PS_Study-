#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	vector<int> s(5);
	int num = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> s[i];
		if (s[i] < 40)
		{
			s[i] = 40;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		num += s[i];
	}
	cout << num / 5 << "\n";

	return 0;
}
