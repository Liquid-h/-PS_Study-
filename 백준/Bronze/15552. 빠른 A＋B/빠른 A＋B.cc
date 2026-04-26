#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}
