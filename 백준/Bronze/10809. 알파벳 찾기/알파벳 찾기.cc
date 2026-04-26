#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	int q;

	cin >> str;

	vector<char> words(str.begin(), str.end());
	vector<int> result(26, -1);

	int i = 0;

	for (int i = 0; i < words.size(); i++)
	{
		q = words[i] - 'a';

		if (result[q] == -1)
		{
			result[q] = i;
		}
	}
	for (int ii = 0; ii < result.size(); ii++)
	{
		cout << result[ii] << " ";
	}
	return 0;
}