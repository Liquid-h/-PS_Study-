#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	float result = 0;

	cin >> n;

	result = (float)n * 0.01 + 25;

	cout << fixed << setprecision(2);

	if (result <= 100)
	{
		result = 100;
		cout << result << endl;
	}
	else if (result >= 2000)
	{
		result = 2000;
		cout << result << endl;
	}
	else
	{
		cout << result << endl;
	}

	return 0;
}
