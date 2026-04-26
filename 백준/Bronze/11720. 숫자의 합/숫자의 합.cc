#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int k = 0;
	int n;
	char c;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		int digit = c - '0';
		k += digit;
	}
	cout << k << endl;

	return 0;
}
