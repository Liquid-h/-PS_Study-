#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x;

	cin >> x;
	if (x % 3 == 0)
	{
		cout << "S";
	}
	else if (x % 3 == 1)
	{
		cout << "U";
	}
	else
	{
		cout << "O";
	}

	return 0;
}
