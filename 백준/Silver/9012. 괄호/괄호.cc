#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	string s;

	for (int i = 0; i < t; i++)
	{
		cin >> s;
		int balance = 0;
		bool isValid = true;

		for (char ch : s)
		{
			if (ch == '(')
				balance++;
			else if (ch == ')')
				balance--;

			if (balance < 0)
			{
				isValid = false;
				break;
			}
		}

		if (isValid && balance == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}