#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	vector<vector<char>> s(5, vector<char>(15, ' '));

	for (int i = 0; i < 5; i++)
	{
		string k;
		cin >> k;
		for (int ii = 0; ii < k.size(); ii++)
		{
			s[i][ii] = k[ii];
		}
	}
	for (int iii = 0; iii < 15; iii++)
	{
		for (int iv = 0; iv < 5; iv++)
		{
			if (s[iv][iii] != ' ')
			{
				cout << s[iv][iii];
			}
		}
	}
	return 0;//bbbbbbbbbbbbbb키가 고장났어요
}
