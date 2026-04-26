#include<iostream>
using namespace std;
/*꿍실냐옹~!*/
int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;

	cin >> a >> b;

	int k = gcd(a, b);//최대공약수

	int r = a * b / k;//최소공배수

	cout << k << "\n" << r << "\n";

	return 0;
}
