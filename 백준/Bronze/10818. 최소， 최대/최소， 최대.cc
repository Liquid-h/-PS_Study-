#include<iostream>
#include<vector>
#include <utility>
using namespace std;
/*
꿍실냐옹
*/
int main(void)
{
	int n;
	int M1 = -10000001, M2 = 1000001;

	cin >> n;
	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i] < M2)
		{
			M2 = s[i];
		}
		if (s[i] > M1)
		{
			M1 = s[i];
		}
	}
	cout << M2 << " " << M1 << endl;

	return 0;
}
