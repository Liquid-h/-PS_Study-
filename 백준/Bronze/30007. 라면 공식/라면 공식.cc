#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
	int n = 0;

	queue<int> w;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a = 0, b = 0, x = 0;
		int k = 0;

		cin >> a >> b >> x;

		k = a * (x - 1) + b;

		w.push(k);
	}
	while (!w.empty())
	{
		cout << w.front() << endl;

		w.pop();
	}
	return 0;
}