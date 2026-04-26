#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int a, b, t;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i << ": " << a + b << "\n";
	}

	return 0;
}
