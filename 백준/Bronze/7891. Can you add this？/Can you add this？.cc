#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	long long int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		cout << a + b << endl;
	}
	return 0;
}
