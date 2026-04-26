#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
	int t, n;
	string q;

	while (1)
	{
		cin >> q >> t >> n;

		if (q == "#" && t == 0 && n == 0)
		{
			break;
		}
		if (t > 17 || n >= 80)
		{
			cout << q << " " << "Senior" << endl;
		}
		else
		{
			cout << q << " " << "Junior" << endl;
		}
	}
	return 0;
}
