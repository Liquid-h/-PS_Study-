#include<iostream>
#include<vector>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int a, b;

	cin >> a >> b;

	cout << a * a - b * b << endl;

	return 0;
}
