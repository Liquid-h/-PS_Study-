#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	vector<int> s(3);
	int a, b, c;

	cin >> a >> b >> c;
	s[0] = a, s[1] = b, s[2] = c;

	sort(s.begin(), s.end());

	cout << s[1] << "\n";

	return 0;
}
