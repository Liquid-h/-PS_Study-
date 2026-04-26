#include<iostream>
#include<vector>
#include <utility>
using namespace std;
/*
꿍실냐옹
*/
int main(void)
{
	int n, a, b, c;
	int q = 0, w = 0, e = 0;

	cin >> n;
	cin >> a >> b >> c;
	if (a > n)
	{
		a = n;
	}
	if (b > n)
	{
		b = n;
	}
	if (c > n)
	{
		c = n;
	}
	cout << a + b + c;

	return 0;
}
