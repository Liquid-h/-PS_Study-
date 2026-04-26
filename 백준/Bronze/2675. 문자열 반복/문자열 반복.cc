#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
	int t, n;
	string q;

	cin >> t;

	for (int  i = 1; i <= t; i++)
	{
		cin >> n >> q;
		for (int ii = 0; ii < q.size(); ii++)
		{
			for (int iii = 0; iii < n; iii++)
			{
				cout << q[ii];
			}
		}
		cout << endl;
	}
}
