#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long a, long long b)
{
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b;

	cin >> a >> b;

	long long k = gcd(a, b);

	vector<int> s(k, 1);

	for (int i = 0; i < s.size(); i++)
	{
		cout << "1";
	}

	return 0;
}
