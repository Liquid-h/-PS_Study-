#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	string n;

	cin >> n;

	vector<char> s(n.begin(), n.end());

	for (int i = 0; i < n.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	for (int ii = 0; ii < n.size(); ii++)
	{
		cout << s[ii];
	}

	return 0;
}
