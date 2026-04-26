#include<iostream>
#include<queue>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	queue<int> q;
	int result = 0;

	for (int i = 0; i < 4; i++)
	{
		int n;
		cin >> n;
		q.push(n);
		result += q.front();
		q.pop();
	}

	if (result <= 1500 && result > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}