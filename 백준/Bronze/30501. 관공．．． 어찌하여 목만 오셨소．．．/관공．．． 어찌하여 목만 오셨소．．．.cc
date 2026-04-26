#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string name;
	string q;
	int n;

	cin >> n;

	vector<char> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> name;

		v.push_back(name[0]);

		for (int ii = 0; ii < name.size(); ii++)
		{
			if (name[ii] == 'S')
			{
				q = name;

			}
		}
		name.clear();
	}

	cout << q << "\n";

	return 0;
}