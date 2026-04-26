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

	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s.begin(), s.end(),greater<int>());
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << "\n";
	}

	return 0;//꿍실냐옹~
}
