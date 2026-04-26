#include<iostream>
#include<vector>
#include <utility>
#include<set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	set<int> s;

	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		k = n % 42;
		s.insert(k);
	}

	cout << s.size() << endl;

	return 0;
}
