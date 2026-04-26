#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;//논문의 개수, 가장 작은 인용 횟수
	int index = 0, m = 0;//q-인덱스 값


	cin >> n;
	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s.begin(), s.end());


	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] < n - i)
		{
			m = s[i];
		}
		else
		{
			m = n - i;
		}
		if (m > index)
		{
			index = m;
		}
	}

	cout << index << "\n";
	return 0;
}
