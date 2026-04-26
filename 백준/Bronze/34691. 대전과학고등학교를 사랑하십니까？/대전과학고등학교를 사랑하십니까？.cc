#include <iostream>
#include<string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;

	while (1)
	{
		cin >> str;

		if (str == "animal")
		{
			cout << "Panthera tigris" << endl;
		}
		else if (str == "tree")
		{
			cout << "Pinus densiflora" << endl;
		}
		else if (str == "flower")
		{
			cout << "Forsythia koreana" << endl;
		}
		else if (str == "end")
		{
			break;
		}

	}
	return 0;
}