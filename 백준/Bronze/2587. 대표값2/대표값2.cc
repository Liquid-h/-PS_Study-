#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> s(5);
	int avr = 0;
	int mid = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> s[i];
	}

	sort(s.begin(), s.end());

	for (int i = 0; i < 5; i++)
	{
		avr += s[i];
	}

	avr /= 5;
	mid = s[2];

	cout << avr << "\n";
	cout << mid << "\n";

	return 0;
}
