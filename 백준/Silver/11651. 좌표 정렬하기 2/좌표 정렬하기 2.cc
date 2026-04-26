#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	vector<vector<int>> s(n, vector<int>(2));

	for (int i = 0; i < n; i++)
	{
		cin >> s[i][0] >> s[i][1];
	}

	sort(s.begin(), s.end(), [](vector<int> &a, vector<int>& b)
		{
			if (a[1] != b[1])
			{
				return a[1] < b[1];
			}
			return a[0] < b[0];
		});

	for (int ii = 0; ii < n; ii++)
	{
		cout << s[ii][0] << " " << s[ii][1] << "\n";
	}
	return 0;
}
