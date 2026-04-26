#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*꿍실냐옹~!*/

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	string n;

	cin >> n;

	vector<char> s(n.begin(), n.end());

	cout << s.size() << "\n";

	return 0;
}
