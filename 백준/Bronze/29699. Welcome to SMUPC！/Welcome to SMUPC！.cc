#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int n;

	cin >> n;
	string s = "WelcomeToSMUPC";

	cout << s[(n - 1) % s.size()];

	return 0;
}