#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a;

	cin >> a;

	if (a == "n" || a == "N")
	{
		cout << "Naver D2" << endl;
	}
	else
	{
		cout << "Naver Whale" << endl;
	}
	return 0;
}
