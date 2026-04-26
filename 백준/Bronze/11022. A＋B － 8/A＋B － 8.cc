#include<iostream>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int a, b, c, t;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		c = a + b;
		cout << "Case #" << i << ": " << a << " " << "+" << " " << b << " " << "=" << " " << c << "\n";
	}

	return 0;
}
