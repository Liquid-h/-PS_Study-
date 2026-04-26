#include<iostream>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	if (a + b + c != 180)
	{
		cout << "Error";
	}
	else if (a + b + c == 180)
	{
		if (a == 60 && b == 60 && c == 60)
		{
			cout << "Equilateral";
		}
		else if (a != b && a != c && b != c)
		{
			cout << "Scalene";
		}
		else if (a == b && a != c || b == c && b != a || c == a && c != b)
		{
			cout << "Isosceles";
		}
	}
	return 0;
}
