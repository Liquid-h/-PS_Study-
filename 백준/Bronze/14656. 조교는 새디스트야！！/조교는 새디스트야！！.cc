#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
/*맥주 마시고 코딩하니까 기분이가 막 좋다 으하하하하*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	vector<int> s(20000);
	iota(s.begin(), s.end(), 1);

	int n, k = 0;

	cin >> n;

	vector<int> lee(n);

	for (int jung = 0; jung < n; jung++)
	{
		cin >> lee[jung];
	}
	for (int wu = 0; wu < lee.size(); wu++)
	{
		if (s[wu] != lee[wu])
		{
			k++;
		}
	}

	cout << k << "\n";

	return 0;//꿍실냐옹~
}
