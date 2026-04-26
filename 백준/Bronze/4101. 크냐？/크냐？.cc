#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int a, b;

	while (1 != 0)
	{
		cin >> a >> b;
		if (a > b)
		{
			if (a == 0 && b == 0)
			{
				break;
			}
			cout << "Yes" << "\n";
		}
		else if (a <= b)
		{
			if (a == 0 && b == 0)
			{
				break;
			}
			cout << "No" << "\n";
		}
	}
	return 0;
}
