#include <iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s;

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		getline(cin, s);
		if (i > 0)
		{
			cout << i << ". " << s << "\n";
		}
	}

	return 0;
}
