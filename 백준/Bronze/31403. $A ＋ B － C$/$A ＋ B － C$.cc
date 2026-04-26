#include<iostream>
#include<vector>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b, c;

	cin >> a >> b >> c;

	string ab = a + b;

	cout << stoi(a) + stoi(b) - stoi(c) << endl;
	cout << stoi(ab) - stoi(c) << endl;

	return 0;
}
