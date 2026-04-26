#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	if (n == 1)
	{
		cout << "Leading the Way to the Future" << endl;
	}
	else if (n == 0)
	{
		cout << "YONSEI" << endl;
	}
	return 0;
}
