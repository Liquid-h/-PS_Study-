#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, v, d;

	cin >> a >> b >> v;

	d = (v - b - 1) / (a - b) + 1;

	cout << d << "\n";

	return 0;
}
